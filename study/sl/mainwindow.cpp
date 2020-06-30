#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <synchapi.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->changeTitleButton,SIGNAL(clicked()),this,SLOT(changeTitleSlot()));
    QObject::connect(this,SIGNAL(custSignal(QString)),this,SLOT(close(QString)));
    QObject::connect(ui->changeButton,SIGNAL(clicked()),this,SLOT(changeTitleSlot()));
    QObject::connect(ui->closeButton,SIGNAL(clicked()),qApp,SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeTitleSlot()
{
    //
    this->setWindowTitle("I love Googol");
}

void MainWindow::close(QString context)
{
    this->setWindowTitle(context);
}

void MainWindow::on_custButton_clicked()
{
    //qDebug()<<"cust Button clicker";
    //Sleep(5000);
    emit this->custSignal("hello");
}
