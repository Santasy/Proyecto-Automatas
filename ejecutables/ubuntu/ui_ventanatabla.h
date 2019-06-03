/********************************************************************************
** Form generated from reading UI file 'ventanatabla.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANATABLA_H
#define UI_VENTANATABLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            ventanaTabla->setObjectName(QStringLiteral("ventanaTabla"));
        ventanaTabla->setWindowModality(Qt::NonModal);
        ventanaTabla->resize(652, 365);
        ventanaTabla->setCursor(QCursor(Qt::PointingHandCursor));
        ventanaTabla->setSizeGripEnabled(false);
        ventanaTabla->setModal(false);
        buttonBox = new QDialogButtonBox(ventanaTabla);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(ventanaTabla);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 621, 201));
        tableWidget->setMinimumSize(QSize(256, 0));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        label = new QLabel(ventanaTabla);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 260, 331, 21));
        label_2 = new QLabel(ventanaTabla);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 0, 491, 21));
        label_3 = new QLabel(ventanaTabla);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 280, 491, 21));
        label_4 = new QLabel(ventanaTabla);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 621, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_4->setWordWrap(true);
        label_5 = new QLabel(ventanaTabla);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 300, 331, 21));
        label_6 = new QLabel(ventanaTabla);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 330, 231, 16));
        nFinales = new QSpinBox(ventanaTabla);
        nFinales->setObjectName(QStringLiteral("nFinales"));
        nFinales->setGeometry(QRect(390, 320, 78, 26));
        nFinales->setMinimum(1);

        retranslateUi(ventanaTabla);
        QObject::connect(buttonBox, SIGNAL(accepted()), ventanaTabla, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ventanaTabla, SLOT(reject()));

        QMetaObject::connectSlotsByName(ventanaTabla);
    } // setupUi

    void retranslateUi(QDialog *ventanaTabla)
    {
        ventanaTabla->setWindowTitle(QApplication::translate("ventanaTabla", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ventanaTabla", "* 'q0' es el estado inicial.", Q_NULLPTR));
        label_2->setText(QApplication::translate("ventanaTabla", "Ingrese relaciones estado-s\303\255mbolo (los estados tienen 'q' en el nombre)", Q_NULLPTR));
        label_3->setText(QApplication::translate("ventanaTabla", "* El \303\255ndice para 'q1', ser\303\255a 1.", Q_NULLPTR));
        label_4->setText(QApplication::translate("ventanaTabla", "Ingrese \303\255ndice para indicar a qu\303\251 estado est\303\241 relacionado el estado seg\303\272n el s\303\255mbolo le\303\255do.", Q_NULLPTR));
        label_5->setText(QApplication::translate("ventanaTabla", "* '-1' indicar\303\241 que no hay relaci\303\263n.", Q_NULLPTR));
        label_6->setText(QApplication::translate("ventanaTabla", "Cantidad de nodos finales:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventanaTabla: public Ui_ventanaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANATABLA_H
