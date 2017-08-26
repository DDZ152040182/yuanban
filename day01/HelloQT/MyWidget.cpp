#include "MyWidget.h"
#include <QPainter>
#include <QMouseEvent>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent)
{
    _button = new QPushButton("This is button", this);
}

void MyWidget::paintEvent(QPaintEvent *)
{
    // QPainter 绘制类
    // 绘制打印机、绘制图画、拷屏。。。
    QPainter painter(this);
#if 0
    painter.setPen(QColor(255, 0, 0));
    painter.setBrush(QBrush(QColor(255, 255, 0)));

    painter.drawLine(QPoint(0, 0), QPoint(100, 100));
    painter.drawText(200, 200, "HelloQT");
    painter.drawEllipse(QPoint(200, 300), 50, 50);
#endif
    painter.drawEllipse(_ptClick, 30, 30);

}

void MyWidget::mousePressEvent(QMouseEvent *ev)
{
// 得到鼠标点击的地方
    _ptClick = ev->pos();

    // 强制程序重新绘制界面
    update();

 //   QPainter p(this);
  //  p.drawEllipse(pt, 30, 30);
}




