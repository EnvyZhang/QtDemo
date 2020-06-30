#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    this->movie=new QMovie("gifs/dashan.gif");
    qDebug()<<"current movie has"<<this->movie->frameCount();
    ui->movieLabel->setMovie(this->movie);
    this->movie->start();

    QObject::connect(ui->startButton,SIGNAL(clicked()),this,SLOT(startMovieSlot()));
    connect(ui->stopButton,SIGNAL(clicked()),this,SLOT(stopMovieSlot()));
}

about::~about()
{
    delete ui;
}
void about::startMovieSlot(){
    this->movie->start();
}
void about::stopMovieSlot(){
    this->movie->stop();
}
