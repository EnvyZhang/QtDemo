#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>
#include <stdio.h>
#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QDateTime>
#include <QDesktopWidget>  //居中显示需要用到的库
#include <QUrl>
#include <QDesktopServices> //用于访问桌面服务的类
#include <about.h>
#include <QCloseEvent>
#include <synchapi.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::MainWindow *ui;
private slots:
    void newFileSlot();
    void openFileSlot();
    void saveFileSlot();
    void saveAsFileSlot();
    void printFileSlot();
    void setFontSlot();
    void setColorSlot();
    void currentDateTimeSlot();
    void aboutWebsiteSlot();
    void aboutSoftwareSlot();
};

#endif // MAINWINDOW_H
