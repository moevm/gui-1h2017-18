#include "widget.h"
#include "QTextEdit"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QFile"
#include "QTextCodec"
#include "QDebug"
#include "planetwidget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    TextEdid = new QTextEdit;
    TextEdid->setReadOnly(true);
    QVBoxLayout *layout = new QVBoxLayout;
    QHBoxLayout *QV = new QHBoxLayout;
    layout->addLayout(QV);
    for (int i=1;i<10;i++){
        QString Q(":/");
        QString num = QString::number(i);
        QString W(".png");

        QString ext(".txt");
        QTextCodec *c = QTextCodec::codecForName("CP1251");
        QFile file (Q+num+ext);
        file.open(QFile::ReadOnly);
        QByteArray data = file.readAll();
        QString string = c->toUnicode(data);

        PlanetWidget *planet = new PlanetWidget(this, Q+num+W, string, TextEdid);
        QV->addWidget(planet);
    }

    layout->addWidget(TextEdid);
    this->setLayout(layout);
}
