#ifndef WIDGET_H
#define WIDGET_H

#include <QTime>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QLabel>

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
};

#endif // WIDGET_H
