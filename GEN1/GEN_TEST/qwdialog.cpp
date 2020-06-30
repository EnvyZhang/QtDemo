#include "qwdialog.h"
#include "ui_qwdialog.h"
#include "gts.h"

//void Error(int rtn, QString cmdStr)
//{
//      if (rtn)
//      {
//            qDebug("%s执行出错返回值为",qPrintable(cmdStr));
//            qDebug()<<("%d\n",rtn);
//      }
//}

QWDialog::QWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);
    this->timer = new QTimer;
    QObject::connect(this->timer,SIGNAL(timeout()),SLOT(timerSlot));
}

QWDialog::~QWDialog()
{
    delete ui;
}

void QWDialog::on_pushButton_clicked()
{
    short rtn;
    short CORE = 1;
    short AXIS = 1;
    short sEcatSts;
    rtn = GTN_Open();   //Error(rtn,"GTN_Open");
    rtn = GTN_InitEcatComm(CORE); //初始化EtherCat总线
    do
        {
             rtn = GTN_IsEcatReady(CORE,&sEcatSts);//读取EcatCat总线状态
             if (rtn != 0) QMessageBox::information(this,"Error","GTN_IsEcatReady Error");
        } while (sEcatSts != 1);
    rtn = GTN_StartEcatComm(CORE);// 启动EtherCAT通讯
    short motionCnt = 0;
    short ioCnt = 0;
    rtn = GTN_GetEcatSlaves(CORE, &motionCnt,&ioCnt);//  读取Ecat总线上的从站及轴数
    rtn = GTN_LoadConfig(CORE,"test.cfg");
    rtn = GTN_ClrSts(CORE,AXIS,4);
    rtn = GTN_AxisOn(CORE,AXIS);
    rtn = GTN_AxisOn(CORE,2);
}

void QWDialog::on_ptpButton_clicked()
{
    short rtn;
    short CORE = 1;
    short AXIS = 1;
    TTrapPrm TrapPrm;
    rtn = GTN_PrfTrap(CORE, AXIS); // 设置为点位运动模式
    if (rtn != 0) QMessageBox::information(this,"Error","GTN_IsEcatReady Error");
    TrapPrm.acc = ui->accLineEdit->text().toDouble();
    TrapPrm.dec = ui->accLineEdit->text().toDouble();
    TrapPrm.smoothTime = 0;
    TrapPrm.velStart = 0;
    rtn = GTN_SetTrapPrm(CORE, AXIS, &TrapPrm); // 设置点位运动参数
    double vel = ui->velLineEdit->text().toDouble();
    rtn = GTN_SetVel(CORE, AXIS, vel);  // 设置目标速度
    long pos = ui->posLineEdit->text().toLong();
    rtn = GTN_SetPos(CORE, AXIS, pos);  // 设置目标位置
    rtn = GTN_Update(CORE, 1 << (AXIS - 1));    // 更新轴运动
}

void QWDialog::on_stopButton_clicked()
{
    short rtn;
    short CORE = 1;
    rtn = GTN_Stop(CORE,0xff,0xff);
}

void QWDialog::timerSlot()
{
    short rtn;
    short CORE = 1;
    short AXIS = 1;
    double prfPos;
    rtn = GTN_GetPrfPos(CORE,AXIS,&prfPos);
    ui->prfPosLabel->setText(QString::number(prfPos));
}
