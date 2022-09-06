#include "mainwindow.h"
#include "custombutton.h"
#include "mouseevent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //自定义按钮窗口
    //CustomButton btn;
    //btn.setText("this is a Button!");
    //btn.show();

    //自定义鼠标监控窗口
    //MouseEvent me;
    //me.setMouseTracking(true);
    //me.resize(500,200);
    //me.show();

    w.show();
    return a.exec();
}
