#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton> // 按钮类
class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

    // 在QTcreator中，类中斜体字表示虚函数
    virtual void paintEvent(QPaintEvent *);

    // mouse press event
    virtual void mousePressEvent(QMouseEvent *);

    // 按钮
    QPushButton* _button;


    QPoint _ptClick;

signals:

public slots:

};

#endif // MYWIDGET_H
