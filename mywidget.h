#ifndef MYWIDGET_H
#define MYWIDGET_H
//#ifndef 是“if not defined”的缩写。这条指令检查 MYWIDGET_H 是否未被定义。
//如果 MYWIDGET_H 未被定义（即第一次包含这个头文件），则条件为真，编译器将继续处理后面的代码



//以上：防止头文件被多次包含，避免重复定义和编译错误



#include <QWidget>//包含头文件 QWidget 窗口类

class myWidget : public QWidget
{
    //public 继承QWidget 窗口类
    Q_OBJECT//宏，允许类中使用信号和槽的机制

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();
};
#endif // MYWIDGET_H
//#endif 是“end if”的缩写。它标志着条件编译的结束，与 #ifndef 配对使用。
