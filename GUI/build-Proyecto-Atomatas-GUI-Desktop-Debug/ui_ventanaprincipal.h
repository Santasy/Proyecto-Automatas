/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "framepainter.h"

QT_BEGIN_NAMESPACE

class Ui_ventanaPrincipal
{
public:
    QWidget *centralWidget;
    FramePainter *frameDibujo;
    QPushButton *button01;
    QPushButton *bZoomIn;
    QPushButton *bZoomOut;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ventanaPrincipal)
    {
        if (ventanaPrincipal->objectName().isEmpty())
            ventanaPrincipal->setObjectName(QString::fromUtf8("ventanaPrincipal"));
        ventanaPrincipal->resize(991, 489);
        centralWidget = new QWidget(ventanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frameDibujo = new FramePainter(centralWidget);
        frameDibujo->setObjectName(QString::fromUtf8("frameDibujo"));
        frameDibujo->setGeometry(QRect(10, 40, 971, 371));
        frameDibujo->setMouseTracking(true);
        frameDibujo->setFrameShape(QFrame::StyledPanel);
        frameDibujo->setFrameShadow(QFrame::Raised);
        button01 = new QPushButton(centralWidget);
        button01->setObjectName(QString::fromUtf8("button01"));
        button01->setGeometry(QRect(10, 10, 101, 25));
        bZoomIn = new QPushButton(centralWidget);
        bZoomIn->setObjectName(QString::fromUtf8("bZoomIn"));
        bZoomIn->setGeometry(QRect(160, 10, 61, 25));
        bZoomOut = new QPushButton(centralWidget);
        bZoomOut->setObjectName(QString::fromUtf8("bZoomOut"));
        bZoomOut->setGeometry(QRect(230, 10, 61, 25));
        ventanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ventanaPrincipal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 991, 22));
        ventanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ventanaPrincipal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ventanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ventanaPrincipal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ventanaPrincipal->setStatusBar(statusBar);

        retranslateUi(ventanaPrincipal);

        QMetaObject::connectSlotsByName(ventanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPrincipal)
    {
        ventanaPrincipal->setWindowTitle(QApplication::translate("ventanaPrincipal", "Ventana Principal", nullptr));
        button01->setText(QApplication::translate("ventanaPrincipal", "Leer Archivo", nullptr));
        bZoomIn->setText(QApplication::translate("ventanaPrincipal", "Zoom +", nullptr));
        bZoomOut->setText(QApplication::translate("ventanaPrincipal", "Zoom -", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipal: public Ui_ventanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
