#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include "transmitterwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    QLabel *label = new QLabel(QApplication::translate("windowlayout", "Name:"));
    QLineEdit *lineEdit = new QLineEdit();
    QHBoxLayout *layout = new QHBoxLayout();
    QPushButton *button = new QPushButton("Activate Key Capture");
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button);
    QWidget window;
    QAbstractButton *abButton = button;
    TransmitterWidget *twidget = new TransmitterWidget( abButton, lineEdit);
    twidget->show();
    window.setLayout(layout);
    window.setWindowTitle( QApplication::translate("windowlayout", "Window layout"));
    w.show();
    window.show();

    //window.grabKeyboard();


    return a.exec();
}
