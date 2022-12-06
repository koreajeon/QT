#include "widget.h"
#include <QTime>
#include <QElapsedTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTime ti0 = QTime(7, 10, 23, 122);
    QLabel *lbl_toString = new QLabel(ti0.toString("AP hh:mm:ss:zzz"), this);
    lbl_toString->setGeometry(10, 10, 150, 30);

    QTime ti1 = QTime(6, 24, 55, 432); // 시,분,초,밀리초(millisecond)

    QTimeEdit *qte[2];
    qte[0] = new QTimeEdit(ti1, this);
    qte[0]->setGeometry(10, 50, 150, 30);

    qte[1] = new QTimeEdit(ti1.addSecs(200), this);
    qte[1]->setGeometry(10, 100, 150, 30);

    QLabel *lbl_fromString = new QLabel(ti1.toString("hh:mm"), this);
    lbl_fromString->setGeometry(10, 130, 150, 30);

    QTime ti5 = QTime(6, 25, 34, 323);
    qDebug("Hour : %d", ti5.hour());
    qDebug("min : %d", ti5.minute());
    qDebug("sec : %d", ti5.second());
    qDebug("msec : %d", ti5.msec());

}

Widget::~Widget()
{

}
