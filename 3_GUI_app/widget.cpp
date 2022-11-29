#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()),
                this, SLOT(pushButtonClick()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::pushButtonClick()
{
    qDebug() << Q_FUNC_INFO << "Hello World";
}
