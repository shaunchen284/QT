#include "mywidget.h"

#include <QApplication>//包含一个应用程序类的头文件
#include <QLocale>
#include <QTranslator>
// argc命令行变量的数量 argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a 应用程序对象，在Qt中，应用程序对象有且仅有一个
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "01project_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    // 通过一个类（myWidget）实例化一个对象（w）
    // w对象叫作窗口对象，myWidget父类是Qwidget
    myWidget w;
    // 窗口对象默认不显示，需要使用show方法显示窗口
    w.show();

    //让应用程序对象进入消息循环，防止窗口一闪而过，点X才关闭
    //让代码堵塞到这行，后面的代码不会运行
    return a.exec();
}
