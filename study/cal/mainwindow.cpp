#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->calButton,SIGNAL(clicked()),this,SLOT(calButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calButton()
{
//    QString firstSN = ui->firstEdit->text();
//    QString seconDSN = ui->secondEidt->text();
//    int firstIN = firstSN.toInt();
//    int secondIN = seconDSN.toInt();
//    int resultIN = firstIN + secondIN;
//    QString resultSN = QString::number(resultIN);
//    ui->resultEdit->setText(resultSN);

    int firstIN = ui->firstEdit->text().toInt();
    int secondIN = ui->secondEidt->text().toInt();
    int resultIN;
    if(ui->comboBox->currentIndex()==0)
    {
         resultIN = firstIN + secondIN;
        ui->resultEdit->setText(QString::number(resultIN));
        QMessageBox::information(this,"Result:",QString::number(resultIN));
    }
    if(ui->comboBox->currentIndex()==1)
    { \
         resultIN = firstIN - secondIN;
        ui->resultEdit->setText(QString::number(resultIN));
        QMessageBox::information(this,"Result:",QString::number(resultIN));
    }
    if(ui->comboBox->currentIndex()==2)
    {
         resultIN = firstIN * secondIN;
        ui->resultEdit->setText(QString::number(resultIN));
        QMessageBox::information(this,"Result:",QString::number(resultIN));
    }
    if(ui->comboBox->currentIndex()==3)
    {
        if(secondIN ==0)
        {
            QMessageBox::warning(this,"Error Message","Second Can't be Zero");
            return;
        }
         resultIN = firstIN / secondIN;
        ui->resultEdit->setText(QString::number(resultIN));
        QMessageBox::information(this,"Result:",QString::number(resultIN));
    }
}
