#ifndef MOUSEEVENT_H
#define MOUSEEVENT_H

#include <QLabel>
#include <QMouseEvent>

/*用于演示鼠标移动，鼠标按下，鼠标释放*/
class MouseEvent : public QLabel
{
public:
    MouseEvent(){};
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // MOUSEEVENT_H
