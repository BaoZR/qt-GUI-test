#include "custombutton.h"
#include <QDebug>

CustomButton::CustomButton(QWidget *parent)
    :QPushButton(parent)
{
    connect(this,&CustomButton::clicked,this,&CustomButton::onButtonClicked);
}


//被顶替的函数，使用了mousePressEvent,onButtonClicked不会生效
void CustomButton::onButtonClicked()
{
    qDebug() << "You clicked this!";
}

void CustomButton::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        qDebug() << "left";
    }else{
        QPushButton::mousePressEvent(event);
    }
}


