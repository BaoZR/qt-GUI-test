#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QPushButton>
#include <QMouseEvent>
class CustomButton : public QPushButton
{
    Q_OBJECT
public:
    CustomButton(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
private slots:
    void onButtonClicked();


};

#endif // CUSTOMBUTTON_H
