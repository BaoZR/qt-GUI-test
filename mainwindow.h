#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timerEvent(QTimerEvent * e);

private slots:
    void myButton_clicked();

private:
    Ui::MainWindow *ui;
    //定时器id
    int timerId1,timerId2,timerId3;

};
#endif // MAINWINDOW_H
