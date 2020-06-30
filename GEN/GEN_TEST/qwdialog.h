#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <synchapi.h>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QWDialog(QWidget *parent = 0);
    ~QWDialog();

private slots:
    void on_pushButton_clicked();
    void on_ptpButton_clicked();
    void on_stopButton_clicked();
    void timerSlot();
private:
    Ui::QWDialog *ui;
    QTimer *timer;
};

#endif // QWDIALOG_H
