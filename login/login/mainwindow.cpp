#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->passLineEdit->setEchoMode(QLineEdit::Password); //*号显示,非明文显示
    QObject::connect(ui->passLineEdit,SIGNAL(returnPressed()),this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->userLineEdit->text()=="dls" && ui->passLineEdit->text()=="sb")
    {
        QMessageBox::information(this,"Congratulation","Login Success!");
        //do Something
        this->close();
    }
    else
    {
        QMessageBox::information(this,"Permission Deny!","Please Check User Or Password");
    }
}
