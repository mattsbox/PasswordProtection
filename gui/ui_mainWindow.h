/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Fri Oct 12 11:07:47 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionQuit;
    QAction *actionSet_Passwords;
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *firstPasswordLabel;
    QLineEdit *firstPasswordLineEdit;
    QLabel *secondPasswordLabel;
    QLineEdit *secondPasswordLineEdit;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *serviceLabel;
    QComboBox *retrieveServiceComboBox;
    QLabel *usernameLabel;
    QComboBox *retrieveUsernameComboBox;
    QPushButton *retrieveButton;
    QFrame *line_4;
    QPushButton *usernameButton;
    QFrame *line_5;
    QFrame *line_6;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *serviceLabel_2;
    QComboBox *usernameServiceComboBox;
    QLabel *passwordLabel;
    QLineEdit *usernamePasswordLineEdit;
    QLabel *usernameLabel_2;
    QLineEdit *usernameUsernameLineEdit;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QPushButton *serviceButton;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *usernameLabel_3;
    QLineEdit *serviceUsernameLineEdit;
    QLabel *passwordLabel_2;
    QLineEdit *servicePasswordLineEdit;
    QLabel *serviceLabel_3;
    QLineEdit *serviceServiceLineEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuManage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(413, 636);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSet_Passwords = new QAction(MainWindow);
        actionSet_Passwords->setObjectName(QString::fromUtf8("actionSet_Passwords"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 491, 441, 91));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 411, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        firstPasswordLabel = new QLabel(formLayoutWidget);
        firstPasswordLabel->setObjectName(QString::fromUtf8("firstPasswordLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstPasswordLabel);

        firstPasswordLineEdit = new QLineEdit(formLayoutWidget);
        firstPasswordLineEdit->setObjectName(QString::fromUtf8("firstPasswordLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, firstPasswordLineEdit);

        secondPasswordLabel = new QLabel(formLayoutWidget);
        secondPasswordLabel->setObjectName(QString::fromUtf8("secondPasswordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, secondPasswordLabel);

        secondPasswordLineEdit = new QLineEdit(formLayoutWidget);
        secondPasswordLineEdit->setObjectName(QString::fromUtf8("secondPasswordLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, secondPasswordLineEdit);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 411, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 90, 131, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(280, 90, 131, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 120, 411, 62));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        serviceLabel = new QLabel(formLayoutWidget_2);
        serviceLabel->setObjectName(QString::fromUtf8("serviceLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, serviceLabel);

        retrieveServiceComboBox = new QComboBox(formLayoutWidget_2);
        retrieveServiceComboBox->setObjectName(QString::fromUtf8("retrieveServiceComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, retrieveServiceComboBox);

        usernameLabel = new QLabel(formLayoutWidget_2);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, usernameLabel);

        retrieveUsernameComboBox = new QComboBox(formLayoutWidget_2);
        retrieveUsernameComboBox->setObjectName(QString::fromUtf8("retrieveUsernameComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, retrieveUsernameComboBox);

        retrieveButton = new QPushButton(centralwidget);
        retrieveButton->setObjectName(QString::fromUtf8("retrieveButton"));
        retrieveButton->setGeometry(QRect(140, 90, 131, 27));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 180, 411, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        usernameButton = new QPushButton(centralwidget);
        usernameButton->setObjectName(QString::fromUtf8("usernameButton"));
        usernameButton->setGeometry(QRect(150, 200, 111, 27));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 200, 141, 31));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(270, 200, 141, 31));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        formLayoutWidget_3 = new QWidget(centralwidget);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 230, 411, 95));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        serviceLabel_2 = new QLabel(formLayoutWidget_3);
        serviceLabel_2->setObjectName(QString::fromUtf8("serviceLabel_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, serviceLabel_2);

        usernameServiceComboBox = new QComboBox(formLayoutWidget_3);
        usernameServiceComboBox->setObjectName(QString::fromUtf8("usernameServiceComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, usernameServiceComboBox);

        passwordLabel = new QLabel(formLayoutWidget_3);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, passwordLabel);

        usernamePasswordLineEdit = new QLineEdit(formLayoutWidget_3);
        usernamePasswordLineEdit->setObjectName(QString::fromUtf8("usernamePasswordLineEdit"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, usernamePasswordLineEdit);

        usernameLabel_2 = new QLabel(formLayoutWidget_3);
        usernameLabel_2->setObjectName(QString::fromUtf8("usernameLabel_2"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, usernameLabel_2);

        usernameUsernameLineEdit = new QLineEdit(formLayoutWidget_3);
        usernameUsernameLineEdit->setObjectName(QString::fromUtf8("usernameUsernameLineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, usernameUsernameLineEdit);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(0, 350, 141, 31));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 330, 411, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(270, 350, 141, 31));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        serviceButton = new QPushButton(centralwidget);
        serviceButton->setObjectName(QString::fromUtf8("serviceButton"));
        serviceButton->setGeometry(QRect(150, 350, 111, 27));
        formLayoutWidget_4 = new QWidget(centralwidget);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(0, 380, 411, 95));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        usernameLabel_3 = new QLabel(formLayoutWidget_4);
        usernameLabel_3->setObjectName(QString::fromUtf8("usernameLabel_3"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, usernameLabel_3);

        serviceUsernameLineEdit = new QLineEdit(formLayoutWidget_4);
        serviceUsernameLineEdit->setObjectName(QString::fromUtf8("serviceUsernameLineEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, serviceUsernameLineEdit);

        passwordLabel_2 = new QLabel(formLayoutWidget_4);
        passwordLabel_2->setObjectName(QString::fromUtf8("passwordLabel_2"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, passwordLabel_2);

        servicePasswordLineEdit = new QLineEdit(formLayoutWidget_4);
        servicePasswordLineEdit->setObjectName(QString::fromUtf8("servicePasswordLineEdit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, servicePasswordLineEdit);

        serviceLabel_3 = new QLabel(formLayoutWidget_4);
        serviceLabel_3->setObjectName(QString::fromUtf8("serviceLabel_3"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, serviceLabel_3);

        serviceServiceLineEdit = new QLineEdit(formLayoutWidget_4);
        serviceServiceLineEdit->setObjectName(QString::fromUtf8("serviceServiceLineEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, serviceServiceLineEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuManage = new QMenu(menubar);
        menuManage->setObjectName(QString::fromUtf8("menuManage"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuManage->menuAction());
        menuFile->addAction(actionQuit);
        menuManage->addAction(actionSet_Passwords);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionFile->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionSet_Passwords->setText(QApplication::translate("MainWindow", "Set Passwords", 0, QApplication::UnicodeUTF8));
        firstPasswordLabel->setText(QApplication::translate("MainWindow", "First Password", 0, QApplication::UnicodeUTF8));
        secondPasswordLabel->setText(QApplication::translate("MainWindow", "Second Password", 0, QApplication::UnicodeUTF8));
        serviceLabel->setText(QApplication::translate("MainWindow", "Service", 0, QApplication::UnicodeUTF8));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        retrieveButton->setText(QApplication::translate("MainWindow", "Retrieve Password", 0, QApplication::UnicodeUTF8));
        usernameButton->setText(QApplication::translate("MainWindow", "New Username", 0, QApplication::UnicodeUTF8));
        serviceLabel_2->setText(QApplication::translate("MainWindow", "Service", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
        usernameLabel_2->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        serviceButton->setText(QApplication::translate("MainWindow", "New Service", 0, QApplication::UnicodeUTF8));
        usernameLabel_3->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        passwordLabel_2->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
        serviceLabel_3->setText(QApplication::translate("MainWindow", "Service", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuManage->setTitle(QApplication::translate("MainWindow", "Manage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
