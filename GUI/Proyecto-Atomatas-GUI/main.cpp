#include "ventanaprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ventanaPrincipal w;
    w.show();

    return a.exec();
}
