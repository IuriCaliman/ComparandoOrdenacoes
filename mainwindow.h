#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vetor.h"
#include "heap.h"
#include <QVector>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Vetor B;
    Heap C;
    QVector<double> x, y;
    void interfaceOrdenacao();
    void someTudo();

private slots:
    void on_criaPreenche_clicked();

    void on_ordenar_clicked();

    void on_actionMexer_com_ordena_es_triggered();

    void on_grafico_clicked();

    void on_actionGr_fico_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
