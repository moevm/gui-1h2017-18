#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QTextEdit"

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
private:
    QTextEdit *TextEdid;

};

#endif // WIDGET_H
