#include "ventanaprincipal.h"
#include <QApplication>
#include "ventanaingreso.h"

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ofstream outfile ("test.txt");

    QApplication a(argc, argv);
    ventanaIngreso vI;
    ventanaPrincipal w;

    vI.show();

    //w.show();

    return a.exec();
}
