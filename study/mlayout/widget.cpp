#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->move(0,1080-265);
    this->setWindowTitle("fu*k");
    this->setMaximumSize(393,171);
    this->setMinimumSize(393,171);
    QObject::connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_submitButton_clicked()));  //光标在cmdLineEdit上时，按下回车触发确定
    connect(ui->cmdLineEdit,SIGNAL(textEdited(QString)),this,SLOT(submitButtonEnable(QString)));
    connect(ui->submitButton,SIGNAL(clicked()),this,SLOT(startProgramSlot()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_submitButton_clicked()
{
    QProcess *process = new QProcess;
    QString startProgram = ui->cmdLineEdit->text();
    process->start(startProgram.trimmed());
    ui->cmdLineEdit->clear();
    this->close();
}

void Widget::startProgramSlot()
{
    QString startProgramName = ui->cmdLineEdit->text();
    QProcess *process = new QProcess;
    process->start(startProgramName.trimmed());
}

void Widget::submitButtonEnable(QString)
{
    QString intPut = ui->cmdLineEdit->text();
    if(intPut.isEmpty())
    {
        ui->submitButton->setEnabled(false);
    }
    else
    {
        ui->submitButton->setEnabled(true);
    }
}
