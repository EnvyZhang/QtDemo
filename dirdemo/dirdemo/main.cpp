#include <QCoreApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"home path is"<<QDir::homePath();
    qDebug()<<"root path is"<<QDir::rootPath();
    qDebug()<<"temp path is"<<QDir::tempPath();

    return a.exec();
}
