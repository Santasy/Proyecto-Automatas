#include "ventanaprincipal.h"
#include <QApplication>
#include "ventanaingreso.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ventanaIngreso vI;
    ventanaPrincipal w;

    vI.show();

    //w.show();

    return a.exec();
}
