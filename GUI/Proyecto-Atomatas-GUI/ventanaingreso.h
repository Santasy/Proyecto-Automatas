#ifndef VENTANAINGRESO_H
#define VENTANAINGRESO_H

#include <QDialog>

namespace Ui {
class ventanaIngreso;
}

class ventanaIngreso : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaIngreso(QWidget *parent = nullptr);
    ~ventanaIngreso();

private:
    Ui::ventanaIngreso *ui;
};

#endif // VENTANAINGRESO_H
