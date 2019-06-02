#ifndef VENTANAPALABRAS_H
#define VENTANAPALABRAS_H

#include <QDialog>
#include "Core.h"

namespace Ui {
class ventanapalabras;
}

class ventanapalabras : public QDialog
{
    Q_OBJECT

public:
    explicit ventanapalabras(QWidget *parent = 0);
    ~ventanapalabras();

    Core *c_data;

private:
    Ui::ventanapalabras *ui;
};

#endif // VENTANAPALABRAS_H
