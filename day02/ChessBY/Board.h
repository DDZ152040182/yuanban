#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include "Stone.h"

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = 0);

    Stone _s[32];
    int _r; /* 棋子的半径 */
    int _selectid;
    bool _bRedTurn;

    /* 返回象棋棋盘行列对应的像素坐标 */
    QPoint center(int row, int col);
    QPoint center(int id);
    bool getRowCol(QPoint pt, int& row, int& col);

    void drawStone(QPainter& painter, int id);

    void paintEvent(QPaintEvent *);
    void mouseReleaseEvent(QMouseEvent *);

    bool canMove(int moveid, int row, int col, int killid);
    bool canMove1(int moveid, int row, int col, int killid);
    bool canMove2(int moveid, int row, int col, int killid);
    bool canMove3(int moveid, int row, int col, int killid);
    bool canMove4(int moveid, int row, int col, int killid);
    bool canMove5(int moveid, int row, int col, int killid);
    bool canMove6(int moveid, int row, int col, int killid);
    bool canMove7(int moveid, int row, int col, int killid);

signals:

public slots:

};

#endif // BOARD_H
