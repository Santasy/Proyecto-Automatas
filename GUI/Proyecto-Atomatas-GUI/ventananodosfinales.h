#ifndef VENTANANODOSFINALES_H
#define VENTANANODOSFINALES_H

#include <QDialog>
#include "Core.h"

namespace Ui {
class ventanaNodosFinales;
}

class ventanaNodosFinales : public QDialog
{
    Q_OBJECT

public:
    Core *c_data;
    explicit ventanaNodosFinales(QWidget *parent = nullptr, Core *_core = nullptr);
    ~ventanaNodosFinales();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ventanaNodosFinales *ui;
};

#endif // VENTANANODOSFINALES_H
