#ifndef FRAMEPAINTER_H
#define FRAMEPAINTER_H

#include <qframe.h>
#include <qpainter.h>
#include "Core.h"

class FramePainter : public QFrame
{
    Q_OBJECT
public:
    explicit FramePainter(QWidget *parent = 0);
    Core *c_data = nullptr;

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:

};

#endif // FRAMEPAINTER_H
