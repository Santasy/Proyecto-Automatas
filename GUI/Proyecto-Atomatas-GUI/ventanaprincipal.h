#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include "framepainter.h"
#include "Core.h"

namespace Ui {
class ventanaPrincipal;
}

class ventanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaPrincipal(QWidget *parent = 0);
    ~ventanaPrincipal();

    /* Nuestras funciones y atributos */
    Core *c_data = nullptr;

private slots:
    void on_button01_clicked();

    void on_bZoomIn_clicked();

    void on_bZoomOut_clicked();

private:
    Ui::ventanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
