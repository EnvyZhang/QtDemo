#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setFixedSize(540,1170);    //将窗口设置为固定大小
    this->setWindowTitle("Untitled");
    QObject::connect(ui->actionNew_N,SIGNAL(triggered(bool)),this,SLOT(newFileSlot()));
    connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(openFileSlot()));
    connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(saveFileSlot()));
    connect(ui->actionSave_as_A,SIGNAL(triggered(bool)),this,SLOT(saveAsFileSlot()));
    connect(ui->actionExit,SIGNAL(triggered(bool)),this,SLOT(close()));
    //edit menu
    connect(ui->actionCopy_C,SIGNAL(triggered(bool)),ui->textEdit,SLOT(copy()));
    connect(ui->actionCut_C,SIGNAL(triggered(bool)),ui->textEdit,SLOT(cut()));
    connect(ui->actionPaste_P,SIGNAL(triggered(bool)),ui->textEdit,SLOT(paste()));
    connect(ui->actionUndo_U,SIGNAL(triggered(bool)),ui->textEdit,SLOT(undo()));
    connect(ui->actionRedo_R,SIGNAL(triggered(bool)),ui->textEdit,SLOT(redo()));
    connect(ui->actionSelectAll_A,SIGNAL(triggered(bool)),ui->textEdit,SLOT(selectAll()));
    connect(ui->actionFont_F,SIGNAL(triggered(bool)),this,SLOT(setFontSlot()));
    connect(ui->actionColor_C,SIGNAL(triggered(bool)),this,SLOT(setColorSlot()));

    connect(ui->actionDate_D,SIGNAL(triggered(bool)),this,SLOT(currentDateTimeSlot()));
    connect(ui->aboutQtAction,SIGNAL(triggered(bool)),qApp,SLOT(aboutQt()));
    connect(ui->aboutWebAction,SIGNAL(triggered(bool)),this,SLOT(aboutWebsiteSlot()));
    connect(ui->actionAbout_Soft_S,SIGNAL(triggered(bool)),this,SLOT(aboutSoftwareSlot()));
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    //event->ignore();
    if(ui->textEdit->document()->isModified())
    {
        QMessageBox msgBox;
        msgBox.setText("文件已经变更了");
        //显示的文本
        msgBox.setInformativeText("您是否要保存文件?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();//QDialog exec
        switch (ret) {
            case QMessageBox::Save:
                // Save was clicked
                this->saveFileSlot();
                break;
            case QMessageBox::Discard:
                // Don't Save was clicked
                event->ignore();
                break;
            case QMessageBox::Cancel:
                // Cancel was clicked
                break;
            default:
                // should never be reached
                break;
          }
    }
    else
    {
        event->accept();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFileSlot()
{
    if(ui->textEdit->document()->isModified())
    {
        //ui->textEdit->clear();
        qDebug()<<"current file modified";
    }
    else
    {
        //qDebug()<<"not modified";
        ui->textEdit->clear();
        this->setWindowTitle("Untitled____");
    }
}

void MainWindow::openFileSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select A Text File");
        return;
    }
    QFile *file = new QFile;
    file->setFileName(fileName);

    bool ok = file->open(QIODevice::ReadOnly);
    if(ok)
    {
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message","File Open Error"+file->errorString());
        return;
    }
}

void MainWindow::saveFileSlot()
{
    QString saveFileName=QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    if(saveFileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select A Text File");
        return;
    }

    QFile *file=new QFile;
    file->setFileName(saveFileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message","File Save Error");
        return;
    }
}

void MainWindow::saveAsFileSlot()
{
    QString saveFileName = QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    if(saveFileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select A Text File");
        return;
    }
    QFile *file = new QFile;
    file->setFileName(saveFileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();
        file->close();
        delete file;
        this->setWindowTitle(saveFileName+"--------notepad");
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message","File Save Error");
        return;
    }
}


void MainWindow::printFileSlot()
{
    //QPrintDialog static member all
}

void MainWindow::setFontSlot()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok)
    {
        ui->textEdit->setFont(font);
    } else
    {
        QMessageBox::information(this,"Error Message","Error Set Font");
    }
}
void MainWindow::setColorSlot()
{
    QColor color = QColorDialog::getColor(Qt::green, this);
         if (color.isValid()) {
             ui->textEdit->setTextColor(color);
         }else
         {
              QMessageBox::information(this,"Error Message","Error Set Color");
         }
}
void MainWindow::currentDateTimeSlot()
{
    QDateTime current = QDateTime::currentDateTime();
    QString time = current.toString("yyyy-mm-dd hh:mm:ss");
    ui->textEdit->append(time); //将字符串追加上去
}
void MainWindow::aboutWebsiteSlot()
{
    QDesktopServices::openUrl(QUrl("http://www.googoltech.com.cn/"));
}
void MainWindow::aboutSoftwareSlot()
{
    about *dialog = new about;
    dialog->show();//unmodal dialog
    //dialog.exec() modal dialog
}
