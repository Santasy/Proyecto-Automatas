/********************************************************************************
** Form generated from reading UI file 'ventanatabla.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANATABLA_H
#define UI_VENTANATABLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ventanaTabla
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ventanaTabla)
    {
        if (ventanaTabla->objectName().isEmpty())
            ventanaTabla->setObjectName(QString::fromUtf8("ventanaTabla"));
        ventanaTabla->resize(400, 300);
        buttonBox = new QDialogButtonBox(ventanaTabla);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ventanaTabla);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaTabla, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaTabla, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaTabla);
    } // setupUi

    void retranslateUi(QDialog *ventanaTabla)
    {
        ventanaTabla->setWindowTitle(QApplication::translate("ventanaTabla", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaTabla: public Ui_ventanaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANATABLA_H
