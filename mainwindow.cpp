#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDockWidget>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//用于.ui文件所生成类的构造函数，显示设计的窗体

    //定时器的用法
    //startTimer 定义每多少毫秒触发事件
    timerId1 = this->startTimer(1000);
    timerId2 = this->startTimer(500);
    timerId3 = this->startTimer(1000);

    //悬停窗口
    QDockWidget * dock = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    QTextEdit *textEdit1 = new QTextEdit(this);
    dock->setWidget(textEdit1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    //qDebug() << e->timerId();
    if(e->timerId() == this->timerId1){
        static int sec = 0;
        ui->label->setText(QString("<center><h1>timer 1 out: %1</h1></center>")
                .arg(sec++));
        if(5 == sec)
        {
            //this->killTimer(this->timerId1);
        }
    }
        else if(e->timerId() == this->timerId2)
        {
            static int seC =  0;
            ui->label_2->setText(QString("<center><h1>timer 2 out: %1</h1></center>")
                                 .arg(seC++));
            qDebug() << "timer2";
        }
        else if(e->timerId() == this->timerId3)
        {
            static int i = 0;
            if(i < 101)
            {
                ui->progressBar->setValue(i++);
            }
            else
                i = 0;
        }
    }



void MainWindow::myButton_clicked()
{
    ui->myButton->setText(tr("click"));
}

