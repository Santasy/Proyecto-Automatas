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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaTabla
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *nFinales;

    void setupUi(QDialog *ventanaTabla)
    {
        if (ventanaTabla->objectName().isEmpty())
            ventanaTabla->setObjectName(QString::fromUtf8("ventanaTabla"));
        ventanaTabla->setWindowModality(Qt::NonModal);
        ventanaTabla->resize(676, 365);
        ventanaTabla->setCursor(QCursor(Qt::PointingHandCursor));
        ventanaTabla->setSizeGripEnabled(false);
        ventanaTabla->setModal(false);
        buttonBox = new QDialogButtonBox(ventanaTabla);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(330, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(ventanaTabla);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 621, 201));
        tableWidget->setMinimumSize(QSize(256, 0));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        label = new QLabel(ventanaTabla);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 250, 261, 31));
        label_2 = new QLabel(ventanaTabla);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 0, 461, 16));
        label_3 = new QLabel(ventanaTabla);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 280, 431, 16));
        label_4 = new QLabel(ventanaTabla);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 621, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_4->setWordWrap(true);
        label_5 = new QLabel(ventanaTabla);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 300, 291, 16));
        label_6 = new QLabel(ventanaTabla);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 330, 231, 16));
        nFinales = new QSpinBox(ventanaTabla);
        nFinales->setObjectName(QString::fromUtf8("nFinales"));
        nFinales->setGeometry(QRect(220, 320, 78, 26));
        nFinales->setMinimum(1);

        retranslateUi(ventanaTabla);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaTabla, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaTabla, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaTabla);
    } // setupUi

    void retranslateUi(QDialog *ventanaTabla)
    {
        ventanaTabla->setWindowTitle(QApplication::translate("ventanaTabla", "Dialog", nullptr));
        label->setText(QApplication::translate("ventanaTabla", "*q0 es estado inicial.", nullptr));
        label_2->setText(QApplication::translate("ventanaTabla", "Ingrese relaciones estado-s\303\255mbolo (los estados tienen 'q' en el nombre)", nullptr));
        label_3->setText(QApplication::translate("ventanaTabla", "*Ingrese un n\303\272mero para referirse a otro estado (q1 ser\303\255a 1, q2 -> 2 y as\303\255)", nullptr));
        label_4->setText(QApplication::translate("ventanaTabla", "Ingrese \303\255ndice para indicar a qu\303\251 estado est\303\241 relacionado qu\303\251 estado seg\303\272n el s\303\255mbolo.", nullptr));
        label_5->setText(QApplication::translate("ventanaTabla", "*Ingrese '-1' para referirse a que no hay relaci\303\263n.", nullptr));
        label_6->setText(QApplication::translate("ventanaTabla", "CANTIDAD NODOS FINALES:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaTabla: public Ui_ventanaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANATABLA_H
