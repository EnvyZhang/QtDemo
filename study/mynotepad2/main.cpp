#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
         QPixmap pixmap("googoltech.png"); //加载图片
         QSplashScreen splash(pixmap);     //初始化屏幕
         splash.show();
         Sleep(2000);                      //处理中
         MainWindow w;
         w.show();
         splash.finish(&w);                //关闭初始化屏幕
         return a.exec();
    //w.move ((QApplication::desktop()->width() - w.width())/2,(QApplication::desktop()->height() - w.height())/2);  //让窗体居中显示
}
