#include <QApplication>
#include "ventanaingreso.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    ventanaIngreso vI;

    vI.show();

    return a.exec();
}
