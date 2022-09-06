#include "mouseevent.h"



void MouseEvent::mouseMoveEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Move:(%1,%2)</h1></center>")
                  .arg(QString::number(event->x()),QString::number(event->y())));
}

void MouseEvent::mousePressEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Press:(%1,%2)</h1></center>")
                  .arg(QString::number(event->x()),QString::number(event->y())));
}

void MouseEvent::mouseReleaseEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Release:(%1,%2)</h1></center>")
                  .arg(QString::number(event->x()),QString::number(event->y())));
}
