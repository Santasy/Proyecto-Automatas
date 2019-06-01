#ifndef VENTANATABLA_H
#define VENTANATABLA_H

#include <QDialog>

namespace Ui {
class ventanaTabla;
}

class ventanaTabla : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaTabla(QWidget *parent = nullptr);
    ~ventanaTabla();

private:
    Ui::ventanaTabla *ui;
};

#endif // VENTANATABLA_H
