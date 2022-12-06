
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QDate dt1 = QDate(2021, 2, 22);
    QDate dt2 = QDate::currentDate();

    dateEdit[0] = new QDateEdit(dt1.addYears(2), this);
    dateEdit[0]->setGeometry(10, 10, 140, 30);

    dateEdit[1] = new QDateEdit(dt1.addMonths(3), this);
    dateEdit[1]->setGeometry(160, 10, 140, 30);

    dateEdit[2] = new QDateEdit(dt1.addDays(10), this);
    dateEdit[2]->setGeometry(310, 10, 140, 30);

    dateEdit[3] = new QDateEdit(dt2, this);
    dateEdit[3]->setGeometry(10, 60, 140, 30);

    qDebug("2022년 1월 1일 부터 지난 일 수 : %d", dt1.dayOfYear());
    qDebug("월의 마지막 일 : %d", dt1.daysInMonth());
    qDebug("년의 마지막 일 : %d", dt1.daysInYear());

    if(QDate::isValid(2021, 2, 41))
        qDebug("true");
    else
        qDebug("false");

    QDate dt3 = QDate(2021, 2, 1);
    QDate dt4 = QDate::currentDate();

    lbl[0] = new QLabel(dt3.toString(), this);
    lbl[0]->setGeometry(10,110, 150, 30);
    lbl[1] = new QLabel(dt4.toString("yyyy-MM-dd"), this);
    lbl[1]->setGeometry(10,150, 150, 30);
}

Widget::~Widget()
{

}















