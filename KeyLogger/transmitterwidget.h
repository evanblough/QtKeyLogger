#ifndef TRANSMITTERWIDGET_H
#define TRANSMITTERWIDGET_H

#include <QObject>
#include <QWidget>
#include <QApplication>
#include <QtWidgets>


class TransmitterWidget : public QWidget
{
    Q_OBJECT
public:
    TransmitterWidget(QPushButton * button, QLineEdit * edit);
    bool eventFilter(QObject* obj, QEvent* event);

public slots:
    void setValue(bool h);

signals:
    void sendStr(QString value);
};


#endif // TRANSMITTERWIDGET_H
