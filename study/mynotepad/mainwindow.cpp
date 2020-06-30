#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Untitled");
    QObject::connect(ui->actionNew_N,SIGNAL(triggered(bool)),this,SLOT(newFileSlot()));
    connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(openFileSlot()));
    connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(saveFileSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFileSlot()
{   //如果当前文档的内容已经改变了
    if(ui->textEdit->document()->isModified())
    {
        qDebug()<<"current file modified";
    }
    else
    {
        //qDebug()<<"not modified";
        ui->textEdit->clear();
        this->setWindowTitle("Untitled___");
    }
}

void MainWindow::openFileSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    //qDebug()<<"fileName is"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select A Text File");
        return;
    }
    QFile *file = new QFile;
    file->setFileName(fileName);

    bool ok=file->open(QIODevice::ReadOnly);
    if(ok)
    {
        //文本与文本流相关联
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message","File Open Error" +file->errorString());
        return;
    }
}

void MainWindow::saveFileSlot()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select A Text File");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        //cout<<
        out<<ui->textEdit->toPlainText();//这里是去除textEdit当中的纯文本
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message","File Save Error");
        return;
    }
}
