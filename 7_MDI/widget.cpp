#include "widget.h"
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QPushButton>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle(QString::fromUtf8("MDI Example"));
    setFixedSize(600,400);

    QMdiArea* area = new QMdiArea();
    area->setSizePolicy(QSizePolicy::Expanding,
                        QSizePolicy::Expanding);

    QMdiSubWindow* subWindow1 = new QMdiSubWindow();
    subWindow1->resize(300, 200);

    QPushButton *btn = new QPushButton(QString("Button"));
    subWindow1->setWidget(btn);

    QMdiSubWindow* subWindow2 = new QMdiSubWindow();
    subWindow2->resize(300, 200);

    area->addSubWindow(subWindow1);
    area->addSubWindow(subWindow2);

    QHBoxLayout *hboxLayout = new QHBoxLayout();
    hboxLayout->addWidget(area);

    setLayout(hboxLayout);
}
