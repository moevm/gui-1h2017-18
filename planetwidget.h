#ifndef PLANETWIDGET_H
#define PLANETWIDGET_H

#include <QWidget>
#include <QTextEdit>

class PlanetWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PlanetWidget(QWidget *parent, QString pick, QString df, QTextEdit *te);
signals:

public slots:
    void onClick();

private:
    QTextEdit *t;
    QString def;

};

#endif // PLANETWIDGET_H
