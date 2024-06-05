#include "mypushbutton.h"
#include<QDebug>
MyPushButton::MyPushButton(QWidget *parent)//这是构造函数
    //这里不需要改，因为要传入一个指针进来，所以保持QWidget
    : QPushButton{parent}
    //这里需要改，因为要把参数交给父类构造，所以改为QPushButton
{
    qDebug()<<"1";

}
MyPushButton::~MyPushButton(){
    qDebug()<<"2";
}
