#include "mywidget.h"
#include <iostream>
using namespace std;
#include <QPushButton>
#include "mypushbutton.h"
#include <QDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    cout<<"myWidget start"<<endl;
    QPushButton *btn = new QPushButton;

    btn->show();//show以顶层的方式弹出空间
    //让btn对象依赖在myWidget窗口中
    //设置父类
    btn->setParent(this);
    //设置文本
    btn->setText("first button");
    btn->move(100,200);
    QPushButton * btn2 = new QPushButton("second button",this);
    //移动btn2按钮
    btn2->move(100,100);
    //设置btn2大小
    btn2->resize(50,50);
    //设置窗口标题
    setWindowTitle("first window");
    //重置窗口大小
    // resize(600,400);
    setFixedSize(400,600);

    MyPushButton *myBtn = new MyPushButton;
    myBtn->setText("wozijideanjiu");
    myBtn ->move(200,200);
    myBtn->setParent(this);//设置到对象树中



}

myWidget::~myWidget() {
    qDebug()<<"myWidget析构";
}
