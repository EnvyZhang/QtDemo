/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QLabel *movieLabel;
    QPushButton *stopButton;
    QPushButton *startButton;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(651, 396);
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 561, 41));
        movieLabel = new QLabel(about);
        movieLabel->setObjectName(QStringLiteral("movieLabel"));
        movieLabel->setGeometry(QRect(50, 90, 531, 161));
        stopButton = new QPushButton(about);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(102, 310, 131, 41));
        startButton = new QPushButton(about);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(350, 320, 71, 21));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("about", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#ff0000;\">\347\211\210\346\235\203\346\211\200\346\234\211\357\274\214\347\233\227\347\211\210\345\277\205\347\251\266\357\274\214\346\211\200\346\234\211\350\247\243\351\207\212\346\235\203\345\275\222\345\233\272\351\253\230\347\247\221\346\212\200\346\211\200\346\234\211</span></p></body></html>", Q_NULLPTR));
        movieLabel->setText(QApplication::translate("about", "TextLabel", Q_NULLPTR));
        stopButton->setText(QApplication::translate("about", "\345\245\275", Q_NULLPTR));
        startButton->setText(QApplication::translate("about", "\344\270\215\345\220\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
