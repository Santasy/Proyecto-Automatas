#ifndef VENTANAINGRESO_H
#define VENTANAINGRESO_H

#include <QDialog>
#include "Core.h"

namespace Ui {
class ventanaIngreso;
}

class ventanaIngreso : public QDialog
{
    Q_OBJECT

public:
    Core *c_data = nullptr;
    explicit ventanaIngreso(QWidget *parent = nullptr);
    ~ventanaIngreso();
    int getNSimbolos();
    int getNNodos();

private slots:
    void on_nNodosQSB_valueChanged(int value);
    void on_nSimbolosQSB_valueChanged(int value);
    void on_buttonBox_accepted();
    void on_bLeerArchivo_clicked();

private:

    Ui::ventanaIngreso *ui;

};

#endif // VENTANAINGRESO_H
