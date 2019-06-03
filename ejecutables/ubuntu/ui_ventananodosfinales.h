/********************************************************************************
** Form generated from reading UI file 'ventananodosfinales.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANANODOSFINALES_H
#define UI_VENTANANODOSFINALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            ventanaNodosFinales->setObjectName(QStringLiteral("ventanaNodosFinales"));
        ventanaNodosFinales->resize(273, 155);
        buttonBox = new QDialogButtonBox(ventanaNodosFinales);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 120, 151, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nodosFinales = new QTableWidget(ventanaNodosFinales);
        if (nodosFinales->rowCount() < 1)
            nodosFinales->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        nodosFinales->setVerticalHeaderItem(0, __qtablewidgetitem);
        nodosFinales->setObjectName(QStringLiteral("nodosFinales"));
        nodosFinales->setGeometry(QRect(10, 40, 251, 71));
        label = new QLabel(ventanaNodosFinales);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 251, 31));

        retranslateUi(ventanaNodosFinales);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaNodosFinales, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaNodosFinales, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaNodosFinales);
    } // setupUi

    void retranslateUi(QDialog *ventanaNodosFinales)
    {
        ventanaNodosFinales->setWindowTitle(QApplication::translate("ventanaNodosFinales", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = nodosFinales->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ventanaNodosFinales", "q", Q_NULLPTR));
        label->setText(QApplication::translate("ventanaNodosFinales", "Ingrese \303\255ndice(s) de nodo(s) finale(s):", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventanaNodosFinales: public Ui_ventanaNodosFinales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANANODOSFINALES_H
