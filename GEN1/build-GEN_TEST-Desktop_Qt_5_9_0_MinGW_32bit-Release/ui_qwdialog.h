/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *prfPosLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *ptpButton;
    QPushButton *stopButton;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *velLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *accLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *posLineEdit;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(486, 283);
        layoutWidget = new QWidget(QWDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 210, 156, 17));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        prfPosLabel = new QLabel(layoutWidget);
        prfPosLabel->setObjectName(QStringLiteral("prfPosLabel"));

        horizontalLayout->addWidget(prfPosLabel);

        layoutWidget1 = new QWidget(QWDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 41, 331, 102));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        ptpButton = new QPushButton(layoutWidget1);
        ptpButton->setObjectName(QStringLiteral("ptpButton"));

        verticalLayout->addWidget(ptpButton);

        stopButton = new QPushButton(layoutWidget1);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout->addWidget(stopButton);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        velLineEdit = new QLineEdit(layoutWidget1);
        velLineEdit->setObjectName(QStringLiteral("velLineEdit"));

        horizontalLayout_3->addWidget(velLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        accLineEdit = new QLineEdit(layoutWidget1);
        accLineEdit->setObjectName(QStringLiteral("accLineEdit"));

        horizontalLayout_4->addWidget(accLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        posLineEdit = new QLineEdit(layoutWidget1);
        posLineEdit->setObjectName(QStringLiteral("posLineEdit"));

        horizontalLayout_2->addWidget(posLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(QWDialog);

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "QWDialog", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialog", "\350\247\204\345\210\222\344\275\215\347\275\256\357\274\232", Q_NULLPTR));
        prfPosLabel->setText(QApplication::translate("QWDialog", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QWDialog", "\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        ptpButton->setText(QApplication::translate("QWDialog", "\347\202\271\344\275\215\350\277\220\345\212\250", Q_NULLPTR));
        stopButton->setText(QApplication::translate("QWDialog", "\345\201\234\346\255\242\350\277\220\345\212\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("QWDialog", "\351\200\237\345\272\246", Q_NULLPTR));
        velLineEdit->setText(QApplication::translate("QWDialog", "5", Q_NULLPTR));
        label_4->setText(QApplication::translate("QWDialog", "\345\212\240\351\200\237\345\272\246", Q_NULLPTR));
        accLineEdit->setText(QApplication::translate("QWDialog", "1", Q_NULLPTR));
        label_2->setText(QApplication::translate("QWDialog", "\346\255\245\351\225\277", Q_NULLPTR));
        posLineEdit->setText(QApplication::translate("QWDialog", "10000", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
