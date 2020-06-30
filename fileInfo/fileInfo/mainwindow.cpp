#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->openFileButton,SIGNAL(clicked(bool)),this,SLOT(getFileInfoSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getFileInfoSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open File",QDir::homePath());
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please select a file");
        return;
    }

    QFileInfo info(fileName);
    ui->fileSizeLineEdit->setText(QString::number(info.size()));//get file size qin64

    QDateTime create = info.created();
    ui->creatTimeLineEdit->setText(create.toString("yyyy-MM-dd hh:MM:ss"));

    QDateTime lastRead=info.lastRead();
    ui->lastAccessLineEdit->setText(lastRead.toString("yyyy-MM-dd hh:MM:ss"));

    if(info.isDir())
    {
        ui->isDirLineEdit->setText("是");
    }
    else
    {
        ui->isDirLineEdit->setText("否");
    }
}
