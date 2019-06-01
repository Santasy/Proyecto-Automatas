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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaTabla
{
public:

    void setupUi(QWidget *ventanaTabla)
    {
        if (ventanaTabla->objectName().isEmpty())
            ventanaTabla->setObjectName(QString::fromUtf8("ventanaTabla"));
        ventanaTabla->resize(400, 300);

        retranslateUi(ventanaTabla);

        QMetaObject::connectSlotsByName(ventanaTabla);
    } // setupUi

    void retranslateUi(QWidget *ventanaTabla)
    {
        ventanaTabla->setWindowTitle(QApplication::translate("ventanaTabla", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaTabla: public Ui_ventanaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANATABLA_H
