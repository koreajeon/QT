#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton> // 버튼 위젯 사용

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr); //생성자 //nullptr = 0
    ~Widget(); // 소멸자

private:
    QPushButton *m_button;
    QString m_str;

public slots:
    void slot_btn(); // 버튼 누르면 실행

};
#endif // WIDGET_H
