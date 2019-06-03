#include <QApplication>
#include "ventanaingreso.h"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    ventanaIngreso vI;

    vI.show();

    return a.exec();
}
