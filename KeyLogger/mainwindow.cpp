#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qimage.h"
#include "qstring.h"
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    const QString s = "Hello";


}

MainWindow::~MainWindow()
{

    delete ui;
}
