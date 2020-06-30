#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//custom slot

private slots:
    void changeTitleSlot();
    void close(QString);

    void on_custButton_clicked();
 signals:
    void custSignal(QString);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
