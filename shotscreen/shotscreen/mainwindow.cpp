#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->timer=new QTimer; //创建定时器
    QObject::connect(this->timer,SIGNAL(timeout()),SLOT(shotScreenSlot()));
    this->timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newScreenShotButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        this->hide();//this->show()
        this->timer=new QTimer; //创建定时器
        QObject::connect(this->timer,SIGNAL(timeout()),SLOT(shotScreenSlot()));
        this->timer->start(ui->spinBox->value()*1000);
    }
    else
    {
        qApp->beep();//蹦的一声
    }
}

void MainWindow::shotScreenSlot()
{
    this->pixmap=QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->screenLabel->setPixmap(this->pixmap.scaled(ui->screenLabel->size()));
    this->show();
    this->timer->stop();
}
