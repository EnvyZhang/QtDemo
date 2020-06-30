/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionPrint_P;
    QAction *actionExit;
    QAction *actionUndo_U;
    QAction *actionRedo_R;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionCut_C;
    QAction *actionSelectAll_A;
    QAction *actionDate_D;
    QAction *actionFont_F;
    QAction *actionColor_C;
    QAction *actionUpdate_U;
    QAction *actionAbout_Soft_S;
    QAction *action1;
    QAction *aboutWebAction;
    QAction *aboutQtAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(357, 663);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/New Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/Open Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon1);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/Save Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon2);
        actionSave_as_A = new QAction(MainWindow);
        actionSave_as_A->setObjectName(QStringLiteral("actionSave_as_A"));
        actionPrint_P = new QAction(MainWindow);
        actionPrint_P->setObjectName(QStringLiteral("actionPrint_P"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUndo_U = new QAction(MainWindow);
        actionUndo_U->setObjectName(QStringLiteral("actionUndo_U"));
        actionRedo_R = new QAction(MainWindow);
        actionRedo_R->setObjectName(QStringLiteral("actionRedo_R"));
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/Copy Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon3);
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName(QStringLiteral("actionPaste_P"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/images/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_P->setIcon(icon4);
        actionCut_C = new QAction(MainWindow);
        actionCut_C->setObjectName(QStringLiteral("actionCut_C"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icon/images/Cut Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_C->setIcon(icon5);
        actionSelectAll_A = new QAction(MainWindow);
        actionSelectAll_A->setObjectName(QStringLiteral("actionSelectAll_A"));
        actionDate_D = new QAction(MainWindow);
        actionDate_D->setObjectName(QStringLiteral("actionDate_D"));
        actionFont_F = new QAction(MainWindow);
        actionFont_F->setObjectName(QStringLiteral("actionFont_F"));
        actionColor_C = new QAction(MainWindow);
        actionColor_C->setObjectName(QStringLiteral("actionColor_C"));
        actionUpdate_U = new QAction(MainWindow);
        actionUpdate_U->setObjectName(QStringLiteral("actionUpdate_U"));
        actionAbout_Soft_S = new QAction(MainWindow);
        actionAbout_Soft_S->setObjectName(QStringLiteral("actionAbout_Soft_S"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QStringLiteral("action1"));
        aboutWebAction = new QAction(MainWindow);
        aboutWebAction->setObjectName(QStringLiteral("aboutWebAction"));
        aboutQtAction = new QAction(MainWindow);
        aboutQtAction->setObjectName(QStringLiteral("aboutQtAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/new/icon/images/morty.png);"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 357, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(actionNew_N);
        menu_F->addAction(actionOpen_O);
        menu_F->addAction(actionSave_S);
        menu_F->addAction(actionSave_as_A);
        menu_F->addSeparator();
        menu_F->addAction(actionPrint_P);
        menu_F->addAction(actionExit);
        menu->addAction(actionUndo_U);
        menu->addAction(actionRedo_R);
        menu->addSeparator();
        menu->addAction(actionCopy_C);
        menu->addAction(actionCut_C);
        menu->addAction(actionPaste_P);
        menu->addAction(actionSelectAll_A);
        menu->addSeparator();
        menu->addAction(actionDate_D);
        menu->addAction(actionFont_F);
        menu->addAction(actionColor_C);
        menu_H->addAction(actionUpdate_U);
        menu_H->addAction(actionAbout_Soft_S);
        menu_H->addAction(action1);
        menu_H->addAction(aboutWebAction);
        menu_H->addAction(aboutQtAction);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionOpen_O);
        mainToolBar->addAction(actionSave_S);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_P);
        mainToolBar->addAction(actionCut_C);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", Q_NULLPTR));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", Q_NULLPTR));
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", Q_NULLPTR));
        actionSave_as_A->setText(QApplication::translate("MainWindow", "Save as(&A)", Q_NULLPTR));
        actionPrint_P->setText(QApplication::translate("MainWindow", "Print(&P)", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit()", Q_NULLPTR));
        actionUndo_U->setText(QApplication::translate("MainWindow", "Undo(&U)", Q_NULLPTR));
        actionRedo_R->setText(QApplication::translate("MainWindow", "Redo(&R)", Q_NULLPTR));
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy(&C)", Q_NULLPTR));
        actionPaste_P->setText(QApplication::translate("MainWindow", "Paste(&P)", Q_NULLPTR));
        actionCut_C->setText(QApplication::translate("MainWindow", "Cut(&C)", Q_NULLPTR));
        actionSelectAll_A->setText(QApplication::translate("MainWindow", "Select All(&S)", Q_NULLPTR));
        actionDate_D->setText(QApplication::translate("MainWindow", "Date(&D)", Q_NULLPTR));
        actionFont_F->setText(QApplication::translate("MainWindow", "Font(&F)", Q_NULLPTR));
        actionColor_C->setText(QApplication::translate("MainWindow", "Color(&C)", Q_NULLPTR));
        actionUpdate_U->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260(&U)", Q_NULLPTR));
        actionAbout_Soft_S->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266(&S)", Q_NULLPTR));
        action1->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&E)", Q_NULLPTR));
        aboutWebAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\345\256\230\347\275\221(&W)", Q_NULLPTR));
        aboutQtAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
