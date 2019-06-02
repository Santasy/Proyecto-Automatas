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
    explicit ventanaTabla(QWidget *parent = nullptr);
    ~ventanaTabla();

    Core *c_data;

private:
    Ui::ventanaTabla *ui;
};

#endif // VENTANATABLA_H
