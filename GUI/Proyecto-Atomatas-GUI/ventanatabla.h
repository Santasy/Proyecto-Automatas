#ifndef VENTANATABLA_H
#define VENTANATABLA_H

#include <QDialog>
#include "Core.h"

namespace Ui {
class ventanaTabla;
}

class ventanaTabla : public QDialog
{
    Q_OBJECT

public:
    Core *c_data = nullptr;

    explicit ventanaTabla(QWidget *parent = nullptr, Core *_core = nullptr);
    ~ventanaTabla();

    int getNNodosFinales();

private slots:

    void on_buttonBox_accepted();

private:
    Ui::ventanaTabla *ui;

};

#endif // VENTANATABLA_H
