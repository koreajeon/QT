#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->hSlider, SIGNAL(valueChanged(int)),
            this, SLOT(slot_valueChanged(int)));

    // Old Style
    connect(this, SIGNAL(sig_textChanged(QString)),
            this, SLOT(slot_textChanged(QString)));

    // New Style
    connect(this, &Widget::sig_textChanged,
            this, &Widget::slot_textChanged);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::slot_valueChanged(int val)
{
    QString str = QString("%1").arg(val);
    ui->leText->setText(str);

    emit sig_textChanged(str);
}


void Widget::slot_textChanged(QString str)
{
    ui->leTextCopy->setText(str);
}

