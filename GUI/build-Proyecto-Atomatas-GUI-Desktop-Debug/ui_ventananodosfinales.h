/********************************************************************************
** Form generated from reading UI file 'ventananodosfinales.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANANODOSFINALES_H
#define UI_VENTANANODOSFINALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaNodosFinales
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *nodosFinales;
    QLabel *label;

    void setupUi(QDialog *ventanaNodosFinales)
    {
        if (ventanaNodosFinales->objectName().isEmpty())
            ventanaNodosFinales->setObjectName(QString::fromUtf8("ventanaNodosFinales"));
        ventanaNodosFinales->resize(394, 174);
        buttonBox = new QDialogButtonBox(ventanaNodosFinales);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 130, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nodosFinales = new QTableWidget(ventanaNodosFinales);
        if (nodosFinales->rowCount() < 1)
            nodosFinales->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        nodosFinales->setVerticalHeaderItem(0, __qtablewidgetitem);
        nodosFinales->setObjectName(QString::fromUtf8("nodosFinales"));
        nodosFinales->setGeometry(QRect(30, 50, 291, 71));
        label = new QLabel(ventanaNodosFinales);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 231, 31));

        retranslateUi(ventanaNodosFinales);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaNodosFinales, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaNodosFinales, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaNodosFinales);
    } // setupUi

    void retranslateUi(QDialog *ventanaNodosFinales)
    {
        ventanaNodosFinales->setWindowTitle(QApplication::translate("ventanaNodosFinales", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = nodosFinales->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ventanaNodosFinales", "q", nullptr));
        label->setText(QApplication::translate("ventanaNodosFinales", "Ingrese \303\255ndice(s) de nodo(s) finale(s):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaNodosFinales: public Ui_ventanaNodosFinales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANANODOSFINALES_H
