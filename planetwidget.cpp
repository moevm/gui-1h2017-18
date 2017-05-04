#include "planetwidget.h"
#include "QVBoxLayout"
#include "QLabel"
#include "QPushButton"

PlanetWidget::PlanetWidget(QWidget *parent,QString pick,QString df, QTextEdit *te) : QWidget(parent)
{
    QVBoxLayout *Layout = new QVBoxLayout;
    QLabel *Label = new QLabel;
    Layout->addWidget (Label);
    Label->setPixmap(QPixmap(pick));
    Label->setScaledContents(true);
    QPushButton *Button = new QPushButton("Инфо");
    Layout->addWidget(Button);
    this->setLayout(Layout);

    t = te;
    def = df;

    connect(Button, &QPushButton::clicked, this, &PlanetWidget::onClick);
}

void PlanetWidget::onClick()
{
    t->setText(def);
}
