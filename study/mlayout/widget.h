#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_submitButton_clicked();
    void submitButtonEnable(QString);
    void startProgramSlot();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
