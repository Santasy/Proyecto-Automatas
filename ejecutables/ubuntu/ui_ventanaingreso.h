/********************************************************************************
** Form generated from reading UI file 'ventanaingreso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAINGRESO_H
#define UI_VENTANAINGRESO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QPushButton *bLeerArchivo;

    void setupUi(QDialog *ventanaIngreso)
    {
        if (ventanaIngreso->objectName().isEmpty())
            ventanaIngreso->setObjectName(QStringLiteral("ventanaIngreso"));
        ventanaIngreso->resize(398, 159);
        buttonBox = new QDialogButtonBox(ventanaIngreso);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 120, 341, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ventanaIngreso);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 90, 191, 21));
        label_2 = new QLabel(ventanaIngreso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 50, 301, 21));
        nNodosQSB = new QSpinBox(ventanaIngreso);
        nNodosQSB->setObjectName(QStringLiteral("nNodosQSB"));
        nNodosQSB->setGeometry(QRect(300, 90, 78, 26));
        nNodosQSB->setMinimum(1);
        nNodosQSB->setSingleStep(1);
        nSimbolosQSB = new QSpinBox(ventanaIngreso);
        nSimbolosQSB->setObjectName(QStringLiteral("nSimbolosQSB"));
        nSimbolosQSB->setEnabled(true);
        nSimbolosQSB->setGeometry(QRect(300, 50, 78, 26));
        nSimbolosQSB->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        nSimbolosQSB->setMinimum(1);
        nSimbolosQSB->setMaximum(62);
        bLeerArchivo = new QPushButton(ventanaIngreso);
        bLeerArchivo->setObjectName(QStringLiteral("bLeerArchivo"));
        bLeerArchivo->setGeometry(QRect(10, 10, 371, 25));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        bLeerArchivo->setFont(font);

        retranslateUi(ventanaIngreso);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaIngreso, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaIngreso, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaIngreso);
    } // setupUi

    void retranslateUi(QDialog *ventanaIngreso)
    {
        ventanaIngreso->setWindowTitle(QApplication::translate("ventanaIngreso", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ventanaIngreso", "Ingrese n\303\272mero de nodos:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ventanaIngreso", "Ingrese cantidad de s\303\255mbolos del alfabeto:", Q_NULLPTR));
        bLeerArchivo->setText(QApplication::translate("ventanaIngreso", "Leer Aut\303\263mata desde Archivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventanaIngreso: public Ui_ventanaIngreso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAINGRESO_H
