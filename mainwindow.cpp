#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <time.h>
#include <string>
#include <sstream>
#include "qcustomplot.h"
#include <QWidget>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    someTudo();
    ui->choose->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::interfaceOrdenacao()
{
    someTudo();
    ui->criaPreenche->show();
    ui->info->show();
    ui->label->show();
    ui->label_2->show();
    ui->tamanho->show();
    ui->tipoVetor->show();
    ui->titulo->show();
    ui->titulo->setText("Ordenando Vetores e Heaps");
}

void MainWindow::someTudo()
{
    ui->label_3->hide();
    ui->sort->hide();
    ui->ordenar->hide();
    ui->criaPreenche->hide();
    ui->info->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->ordenar->hide();
    ui->tamanho->hide();
    ui->tipoVetor->hide();
    ui->choose->hide();
    ui->titulo->hide();
    ui->info->clear();
    ui->grafico->hide();
    ui->plot->hide();
}

void MainWindow::on_criaPreenche_clicked()
{
    ui->info->clear();
    int T=ui->tamanho->currentText().toInt();
    B.criarVetor(T);
    C.criarVetor(T);
    string preenche = ui->tipoVetor->currentText().toStdString();
    if(preenche=="Aleatório")
    {
        B.montaVetorAleatorio();
        C.montaVetorAleatorio();
    }
    else if(preenche=="Crescente")
    {
        B.montaVetorCrescente();
        C.montaVetorCrescente();
    }
    else if(preenche=="Decrescente")
    {
        B.montaVetorDecrescente();
        C.montaVetorDecrescente();
    }
    else
    {
        ui->statusBar->showMessage("Não é possível criar o vetor!", 500);
        return;
    }

    ui->label_3->show();
    ui->sort->show();
    ui->ordenar->show();
}

void MainWindow::on_ordenar_clicked()
{
    string ordem = ui->sort->currentText().toStdString();
    if(ordem == "Insertion")
    {
        clock_t Tempos;
        Tempos = clock();

        B.insertionSort();

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));
        tempo.exec();
    }
    else if(ordem == "Bubble")
    {
        clock_t Tempos;
        Tempos = clock();

        B.bubbleSort();

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));

        tempo.exec();
    }
    else if(ordem == "Merge")
    {
        clock_t Tempos;
        Tempos = clock();

        B.mergeSort(0,(B.getTam()-1));

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));

        tempo.exec();
    }
    else if(ordem == "Heap")
    {
        clock_t Tempos;
        Tempos = clock();

        C.heapSort();

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));

        tempo.exec();

        ui->info->append("Ordenado");
        ui->info->append(QString::fromStdString(C.getA()));

        ui->label_3->hide();
        ui->sort->hide();
        ui->ordenar->hide();

        ui->grafico->show();
        ui->plot->show();

        return;
    }
    else if(ordem == "Quick")
    {
        clock_t Tempos;
        Tempos = clock();

        B.quickSort(0, B.getTam()-1);

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));

        tempo.exec();
    }
    else if(ordem == "Shell")
    {
        clock_t Tempos;
        Tempos = clock();

        B.shellSort();

        Tempos = clock() - Tempos;
        double Tempo=(Tempos*1000)/CLOCKS_PER_SEC;

        stringstream t;
        t << "O vetor foi ordenado em " << Tempo << " ms.";

        QMessageBox tempo;
        tempo.setText(QString::fromStdString(t.str()));

        tempo.exec();
    }
    else
    {
        ui->statusBar->showMessage("Não é possível ordenar!", 500);
        return;
    }
    ui->label_3->hide();
    ui->sort->hide();
    ui->ordenar->hide();

    ui->grafico->show();
    ui->plot->show();

    ui->info->append("Ordenado");
    ui->info->append(QString::fromStdString(B.getA()));
}

void MainWindow::on_actionMexer_com_ordena_es_triggered()
{
    interfaceOrdenacao();
}

void MainWindow::on_grafico_clicked()
{
    for (int i=0; i<101; ++i)
    {
      x.push_back(i/50.0-1);
      y.push_back(x[i]+x[i]); // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->plot->addGraph();
    ui->plot->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->plot->xAxis->setLabel("x");
    ui->plot->yAxis->setLabel("y");
    ui->plot->xAxis->setRange(-1, 1);
    ui->plot->yAxis->setRange(0, 1);
    ui->plot->replot();

    ui->grafico->hide();
}

void MainWindow::on_actionGr_fico_triggered()
{

}
