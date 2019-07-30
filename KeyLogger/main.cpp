#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include "transmitterwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Intialize widget layout elements
    //QLabel *label = new QLabel(QApplication::translate("windowlayout", ""));
    QLineEdit *lineEdit = new QLineEdit();
    QHBoxLayout *layout = new QHBoxLayout();
    QPushButton *button = new QPushButton("Activate Key Capture");

    //Add elements to widget layout
    //layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button);

    //Instatiate Transmitter Widget
    TransmitterWidget *twidget = new TransmitterWidget(button, lineEdit);
    twidget->setLayout(layout);
    twidget->setWindowTitle( QApplication::translate("windowlayout", "Keypad Controller"));
    twidget->show();
    return a.exec();
}
