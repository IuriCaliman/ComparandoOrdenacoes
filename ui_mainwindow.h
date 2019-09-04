/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMexer_com_ordena_es;
    QWidget *centralWidget;
    QLabel *titulo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *tamanho;
    QComboBox *tipoVetor;
    QComboBox *sort;
    QPushButton *criaPreenche;
    QPushButton *ordenar;
    QTextBrowser *info;
    QLabel *choose;
    QPushButton *grafico;
    QCustomPlot *plot;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(644, 449);
        actionMexer_com_ordena_es = new QAction(MainWindow);
        actionMexer_com_ordena_es->setObjectName(QStringLiteral("actionMexer_com_ordena_es"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titulo = new QLabel(centralWidget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(220, 10, 331, 20));
        QFont font;
        font.setPointSize(15);
        titulo->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 111, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 161, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 270, 151, 16));
        label_3->setFont(font1);
        tamanho = new QComboBox(centralWidget);
        tamanho->setObjectName(QStringLiteral("tamanho"));
        tamanho->setGeometry(QRect(20, 80, 69, 22));
        tipoVetor = new QComboBox(centralWidget);
        tipoVetor->setObjectName(QStringLiteral("tipoVetor"));
        tipoVetor->setGeometry(QRect(80, 140, 69, 22));
        sort = new QComboBox(centralWidget);
        sort->setObjectName(QStringLiteral("sort"));
        sort->setGeometry(QRect(30, 290, 69, 22));
        criaPreenche = new QPushButton(centralWidget);
        criaPreenche->setObjectName(QStringLiteral("criaPreenche"));
        criaPreenche->setGeometry(QRect(50, 180, 141, 31));
        ordenar = new QPushButton(centralWidget);
        ordenar->setObjectName(QStringLiteral("ordenar"));
        ordenar->setGeometry(QRect(120, 300, 81, 31));
        info = new QTextBrowser(centralWidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(230, 50, 321, 311));
        choose = new QLabel(centralWidget);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(120, 100, 421, 171));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        choose->setFont(font2);
        grafico = new QPushButton(centralWidget);
        grafico->setObjectName(QStringLiteral("grafico"));
        grafico->setGeometry(QRect(80, 180, 81, 31));
        plot = new QCustomPlot(centralWidget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(270, 70, 251, 261));
        MainWindow->setCentralWidget(centralWidget);
        choose->raise();
        titulo->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        tamanho->raise();
        tipoVetor->raise();
        sort->raise();
        criaPreenche->raise();
        ordenar->raise();
        info->raise();
        grafico->raise();
        plot->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionMexer_com_ordena_es);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Comparando", 0));
        actionMexer_com_ordena_es->setText(QApplication::translate("MainWindow", "Vetor", 0));
        titulo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Tamanho do vetor:", 0));
        label_2->setText(QApplication::translate("MainWindow", "M\303\251todo de preenchimento:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Algoritmo de ordena\303\247\303\243o:", 0));
        tamanho->clear();
        tamanho->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "10", 0)
         << QApplication::translate("MainWindow", "100", 0)
         << QApplication::translate("MainWindow", "1000", 0)
         << QApplication::translate("MainWindow", "10000", 0)
         << QApplication::translate("MainWindow", "100000", 0)
         << QApplication::translate("MainWindow", "500000", 0)
         << QApplication::translate("MainWindow", "1000000", 0)
        );
        tipoVetor->clear();
        tipoVetor->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Aleat\303\263rio", 0)
         << QApplication::translate("MainWindow", "Crescente", 0)
         << QApplication::translate("MainWindow", "Decrescente", 0)
        );
        sort->clear();
        sort->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Insertion", 0)
         << QApplication::translate("MainWindow", "Bubble", 0)
         << QApplication::translate("MainWindow", "Merge", 0)
         << QApplication::translate("MainWindow", "Quick", 0)
         << QApplication::translate("MainWindow", "Shell", 0)
        );
        criaPreenche->setText(QApplication::translate("MainWindow", "Criar vetor e preencher", 0));
        ordenar->setText(QApplication::translate("MainWindow", "Ordenar vetor", 0));
        choose->setText(QApplication::translate("MainWindow", "Para iniciar, escolha uma op\303\247\303\243o no MENU", 0));
        grafico->setText(QApplication::translate("MainWindow", "Gerar Gr\303\241fico", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
