#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPixmap>
#include <QDesktopWidget>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_newScreenShotButton_clicked();
    void shotScreenSlot();
private:
    Ui::MainWindow *ui;
    QTimer *timer;//定义定时器全局变量
    QPixmap pixmap;
};

#endif // MAINWINDOW_H
