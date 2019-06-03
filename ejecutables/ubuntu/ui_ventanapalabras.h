/********************************************************************************
** Form generated from reading UI file 'ventanapalabras.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPALABRAS_H
#define UI_VENTANAPALABRAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanapalabras
{
public:
    QLabel *label;
    QLineEdit *boxPalabra;
    QListWidget *tablaLog;
    QPushButton *bCheckPalabra;
    QTableWidget *tablaResults;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lNN;
    QLabel *lNS;
    QLabel *lNF;
    QLabel *lNoValida;

    void setupUi(QDialog *ventanapalabras)
    {
        if (ventanapalabras->objectName().isEmpty())
            ventanapalabras->setObjectName(QStringLiteral("ventanapalabras"));
        ventanapalabras->resize(595, 369);
        label = new QLabel(ventanapalabras);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 90, 121, 21));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        boxPalabra = new QLineEdit(ventanapalabras);
        boxPalabra->setObjectName(QStringLiteral("boxPalabra"));
        boxPalabra->setGeometry(QRect(140, 90, 201, 25));
        tablaLog = new QListWidget(ventanapalabras);
        tablaLog->setObjectName(QStringLiteral("tablaLog"));
        tablaLog->setGeometry(QRect(10, 140, 331, 211));
        tablaLog->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tablaLog->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bCheckPalabra = new QPushButton(ventanapalabras);
        bCheckPalabra->setObjectName(QStringLiteral("bCheckPalabra"));
        bCheckPalabra->setGeometry(QRect(350, 90, 231, 25));
        tablaResults = new QTableWidget(ventanapalabras);
        if (tablaResults->columnCount() < 2)
            tablaResults->setColumnCount(2);
        if (tablaResults->rowCount() < 1)
            tablaResults->setRowCount(1);
        tablaResults->setObjectName(QStringLiteral("tablaResults"));
        tablaResults->setGeometry(QRect(350, 140, 231, 211));
        QFont font;
        font.setPointSize(10);
        tablaResults->setFont(font);
        tablaResults->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tablaResults->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tablaResults->setShowGrid(true);
        tablaResults->setGridStyle(Qt::SolidLine);
        tablaResults->setRowCount(1);
        tablaResults->setColumnCount(2);
        label_2 = new QLabel(ventanapalabras);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 61, 21));
        gridLayoutWidget = new QWidget(ventanapalabras);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 571, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lNN = new QLabel(gridLayoutWidget);
        lNN->setObjectName(QStringLiteral("lNN"));
        lNN->setLayoutDirection(Qt::LeftToRight);
        lNN->setFrameShape(QFrame::NoFrame);
        lNN->setFrameShadow(QFrame::Raised);
        lNN->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lNN, 0, 1, 1, 1);

        lNS = new QLabel(gridLayoutWidget);
        lNS->setObjectName(QStringLiteral("lNS"));
        lNS->setLayoutDirection(Qt::LeftToRight);
        lNS->setFrameShape(QFrame::NoFrame);
        lNS->setFrameShadow(QFrame::Raised);
        lNS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lNS, 1, 1, 1, 1);

        lNF = new QLabel(gridLayoutWidget);
        lNF->setObjectName(QStringLiteral("lNF"));
        lNF->setLayoutDirection(Qt::LeftToRight);
        lNF->setFrameShape(QFrame::NoFrame);
        lNF->setFrameShadow(QFrame::Raised);
        lNF->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lNF, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        lNoValida = new QLabel(ventanapalabras);
        lNoValida->setObjectName(QStringLiteral("lNoValida"));
        lNoValida->setGeometry(QRect(350, 120, 231, 17));
        QFont font1;
        font1.setItalic(true);
        lNoValida->setFont(font1);
        lNoValida->setAlignment(Qt::AlignCenter);

        retranslateUi(ventanapalabras);

        QMetaObject::connectSlotsByName(ventanapalabras);
    } // setupUi

    void retranslateUi(QDialog *ventanapalabras)
    {
        ventanapalabras->setWindowTitle(QApplication::translate("ventanapalabras", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p>Ingrese palabra:</p><p><br/></p></body></html>", Q_NULLPTR));
        bCheckPalabra->setText(QApplication::translate("ventanapalabras", "Procesar Palabra", Q_NULLPTR));
        label_2->setText(QApplication::translate("ventanapalabras", "Registro:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p>N\303\272m. Simbolos:</p><p><br/></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p>N\303\272m. Nodos:</p><p><br/></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p>Nodos Finales:</p></body></html>", Q_NULLPTR));
        lNN->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        lNS->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        lNF->setText(QApplication::translate("ventanapalabras", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        lNoValida->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ventanapalabras: public Ui_ventanapalabras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPALABRAS_H
