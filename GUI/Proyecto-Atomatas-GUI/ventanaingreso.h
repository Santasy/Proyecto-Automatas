#ifndef VENTANAINGRESO_H
#define VENTANAINGRESO_H

#include <QDialog>
#include <QSpinBox>
#include <QDialogButtonBox>


namespace Ui {
class ventanaIngreso;
}

class ventanaIngreso : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaIngreso(QWidget *parent = nullptr);
    ~ventanaIngreso();

private slots:
    void on_nNodosQSB_valueChanged(int value);
    void on_nSimbolosQSB_valueChanged(int value);


    void on_buttonBox_accepted();

private:
    Ui::ventanaIngreso *ui;

};

#endif // VENTANAINGRESO_H
