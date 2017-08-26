
#include <QApplication>
#include <QWidget>
#include "MyWidget.h"

int main(int argc, char* argv[])
{
    // QApplication抽象了QT的应用程序
    QApplication app(argc, argv);

    // QWidget抽象了窗口
//    QWidget w;
    MyWidget w;
    w.show();

    // 进入消息循环，等待用户输入
    return app.exec();
}
