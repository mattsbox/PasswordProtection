/********************************************************************************
** Form generated from reading UI file 'newPasswordDialog.ui'
**
** Created: Fri Oct 12 11:07:47 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSWORDDIALOG_H
#define UI_NEWPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewPasswordDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *firstPasswordLabel;
    QLineEdit *oldFirstPasswordLineEdit;
    QLabel *secondPasswordLabel;
    QLineEdit *oldSecondPasswordLineEdit;
    QLabel *label;

    void setupUi(QDialog *NewPasswordDialog)
    {
        if (NewPasswordDialog->objectName().isEmpty())
            NewPasswordDialog->setObjectName(QString::fromUtf8("NewPasswordDialog"));
        NewPasswordDialog->resize(386, 134);
        buttonBox = new QDialogButtonBox(NewPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(NewPasswordDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 381, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        firstPasswordLabel = new QLabel(formLayoutWidget);
        firstPasswordLabel->setObjectName(QString::fromUtf8("firstPasswordLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstPasswordLabel);

        oldFirstPasswordLineEdit = new QLineEdit(formLayoutWidget);
        oldFirstPasswordLineEdit->setObjectName(QString::fromUtf8("oldFirstPasswordLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, oldFirstPasswordLineEdit);

        secondPasswordLabel = new QLabel(formLayoutWidget);
        secondPasswordLabel->setObjectName(QString::fromUtf8("secondPasswordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, secondPasswordLabel);

        oldSecondPasswordLineEdit = new QLineEdit(formLayoutWidget);
        oldSecondPasswordLineEdit->setObjectName(QString::fromUtf8("oldSecondPasswordLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, oldSecondPasswordLineEdit);

        label = new QLabel(NewPasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 70, 361, 31));
        label->setStyleSheet(QString::fromUtf8("font: bold"));

        retranslateUi(NewPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *NewPasswordDialog)
    {
        NewPasswordDialog->setWindowTitle(QApplication::translate("NewPasswordDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        firstPasswordLabel->setText(QApplication::translate("NewPasswordDialog", "Password 1", 0, QApplication::UnicodeUTF8));
        secondPasswordLabel->setText(QApplication::translate("NewPasswordDialog", "Password 2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewPasswordDialog", "<html><head/><body><p>Please enter two passwords to encrypt your data</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewPasswordDialog: public Ui_NewPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSWORDDIALOG_H
