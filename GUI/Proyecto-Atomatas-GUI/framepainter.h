#ifndef FRAMEPAINTER_H
#define FRAMEPAINTER_H

#include <qframe.h>
#include <qpainter.h>
#include "Core.h"

class FramePainter : public QFrame{
    Q_OBJECT
public:
    explicit FramePainter(QWidget *parent = 0);
    Core *c_data = nullptr; // Core con todas las funciones y datos
    double zoom = 1.0; // Modificador de zoom

protected:
    void paintEvent(QPaintEvent *event); // Función que dibuja los elementos

signals:

public slots:

};

#endif // FRAMEPAINTER_H
