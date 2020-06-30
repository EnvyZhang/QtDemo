/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QPlainTextEdit *txtEdit;
    QGroupBox *groupBox_2;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnCancel;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(399, 299);
        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(20, 150, 361, 81));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        txtEdit->setFont(font);
        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 90, 361, 41));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));
        rBtnBlack->setGeometry(QRect(20, 10, 67, 19));
        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));
        rBtnRed->setGeometry(QRect(130, 10, 51, 19));
        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));
        rBtnBlue->setGeometry(QRect(250, 10, 59, 19));
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 29, 361, 41));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 351, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chkBoxUnder = new QCheckBox(layoutWidget);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(layoutWidget);
        chkBoxItalic->setObjectName(QStringLiteral("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(layoutWidget);
        chkBoxBold->setObjectName(QStringLiteral("chkBoxBold"));

        horizontalLayout_2->addWidget(chkBoxBold);

        horizontalLayoutWidget = new QWidget(QWDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 240, 351, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);

        btnClose = new QPushButton(horizontalLayoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_5->addWidget(btnClose);

        horizontalSpacer = new QSpacerItem(25, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnOK = new QPushButton(horizontalLayoutWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_5->addWidget(btnOK);

        groupBox->raise();
        groupBox_2->raise();
        txtEdit->raise();
        horizontalLayoutWidget->raise();
        QWidget::setTabOrder(chkBoxItalic, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnBlue);

        retranslateUi(QWDialog);

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "Dialog by Designer", Q_NULLPTR));
        txtEdit->setPlainText(QApplication::translate("QWDialog", "Googol\n"
"", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", Q_NULLPTR));
        groupBox->setTitle(QString());
        chkBoxUnder->setText(QApplication::translate("QWDialog", "Underline", Q_NULLPTR));
        chkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", Q_NULLPTR));
        chkBoxBold->setText(QApplication::translate("QWDialog", "Bold", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
