/********************************************************************************
** Form generated from reading UI file 'ventanaingreso.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAINGRESO_H
#define UI_VENTANAINGRESO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ventanaIngreso
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *nNodosQSB;
    QSpinBox *nSimbolosQSB;

    void setupUi(QDialog *ventanaIngreso)
    {
        if (ventanaIngreso->objectName().isEmpty())
            ventanaIngreso->setObjectName(QString::fromUtf8("ventanaIngreso"));
        ventanaIngreso->resize(400, 300);
        buttonBox = new QDialogButtonBox(ventanaIngreso);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ventanaIngreso);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 171, 21));
        label_2 = new QLabel(ventanaIngreso);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 261, 21));
        nNodosQSB = new QSpinBox(ventanaIngreso);
        nNodosQSB->setObjectName(QString::fromUtf8("nNodosQSB"));
        nNodosQSB->setGeometry(QRect(290, 40, 78, 26));
        nNodosQSB->setMinimum(1);
        nSimbolosQSB = new QSpinBox(ventanaIngreso);
        nSimbolosQSB->setObjectName(QString::fromUtf8("nSimbolosQSB"));
        nSimbolosQSB->setGeometry(QRect(290, 70, 78, 26));
        nSimbolosQSB->setMinimum(1);

        retranslateUi(ventanaIngreso);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaIngreso, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaIngreso, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaIngreso);
    } // setupUi

    void retranslateUi(QDialog *ventanaIngreso)
    {
        ventanaIngreso->setWindowTitle(QApplication::translate("ventanaIngreso", "Dialog", nullptr));
        label->setText(QApplication::translate("ventanaIngreso", "Ingrese n\303\272mero de nodos:", nullptr));
        label_2->setText(QApplication::translate("ventanaIngreso", "Ingrese cantidad de s\303\255mbolos del alfabeto:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaIngreso: public Ui_ventanaIngreso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAINGRESO_H
