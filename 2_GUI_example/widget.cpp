#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    setFixedSize(300, 200);

    m_str = QString("Hello World");
    m_button = new QPushButton("버튼", this); // this = 지금 클레스

    m_button->setGeometry(10, 10, 100, 30);

    connect(m_button, &QPushButton::clicked, this, &Widget::slot_btn);
}

void Widget::slot_btn()
{
    qDebug() << "Hello World button clicked.!!";
}

Widget::~Widget()
{
}
