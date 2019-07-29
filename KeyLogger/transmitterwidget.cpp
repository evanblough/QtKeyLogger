#include "transmitterwidget.h"
#include <QApplication>
#include <QtWidgets>
#include <QObject>

TransmitterWidget::TransmitterWidget(QAbstractButton * button, QLineEdit * edit)
{
    QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(setValue(bool)));
    QObject::connect(this, SIGNAL(sendStr(QString)), edit, SLOT(setText(QString)));
}

bool TransmitterWidget::eventFilter(QObject* obj, QEvent* event)
{
    if (event->type()==QEvent::KeyPress) {
        QKeyEvent* key = static_cast<QKeyEvent*>(event);
        if ( (key->key()==Qt::Key_W)) {
            //Enter or return was pressed
            emit sendStr("Move Foward");
        }
        else if ((key->key()==Qt::Key_A)) {
            emit sendStr("Move Left");
        }
        else if ((key->key()==Qt::Key_S)) {
            emit sendStr("Move Down");
        }
        else if ((key->key()==Qt::Key_D)) {
            emit sendStr("Move Right");
        }
        else if ((key->key()==Qt::Key_Q)) {
            emit sendStr("Release Key Capture");
            this->releaseKeyboard();
        }
        else {
            return QObject::eventFilter(obj, event);
        }
        return true;
    } else {
        return QObject::eventFilter(obj, event);
    }
    return false;
}



void TransmitterWidget::setValue(bool h)
{
    this->grabKeyboard();
    this->installEventFilter(this);
    emit sendStr("Hola");

}
