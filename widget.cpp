#include "widget.h"
#include "ui_widget.h"
#include "QTextEdit"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QFile"
#include "QTextCodec"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    QTextEdit *TextEdid = new QTextEdit;
    QVBoxLayout *layout = new QVBoxLayout;
    QHBoxLayout *QV = new QHBoxLayout;
    layout->addLayout(QV);
    for (int i=1;i<10;i++){
    QString Q(":/");
    QString num = QString::number(i);
    QString W(".png");
    QVBoxLayout *QVV = new QVBoxLayout;
    QV->addLayout(QVV);
    QLabel *label = new QLabel;
    label->setPixmap(QPixmap(Q+num+W));
    label->setScaledContents(true);
    QVV->addWidget(label);
    QPushButton *button = new QPushButton("Инфо");
    QVV->addWidget(button);}
    QTextCodec *c = QTextCodec::codecForName("CP1251");
    QFile file (":/1.txt");
    file.open(QFile::ReadOnly);
    QByteArray data = file.readAll();
    QString string = c->toUnicode(data);
    TextEdid->setText(string);
    layout->addWidget(TextEdid);
    this->setLayout(layout);

    //ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


//void Widget::on_pushButton_clicked()
//{
//ui->textEdit->setText("hi");
//}
