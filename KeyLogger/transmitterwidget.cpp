#include "transmitterwidget.h"
#include <QApplication>
#include <QtWidgets>
#include <QObject>

TransmitterWidget::TransmitterWidget(QAbstractButton * button, QLineEdit * edit)
{
    QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(setValue(bool)));
    QObject::connect(this, SIGNAL(sendStr(QString)), edit, SLOT(setText(QString)));
}


void TransmitterWidget::setValue(bool h)
{
    emit sendStr("Hola");

}