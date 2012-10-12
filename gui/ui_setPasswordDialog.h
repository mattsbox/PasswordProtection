/********************************************************************************
** Form generated from reading UI file 'setPasswordDialog.ui'
**
** Created: Fri Oct 12 11:07:47 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPASSWORDDIALOG_H
#define UI_SETPASSWORDDIALOG_H

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

class Ui_SetPasswordDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *firstPasswordLabel;
    QLineEdit *oldFirstPasswordLineEdit;
    QLabel *secondPasswordLabel;
    QLineEdit *oldSecondPasswordLineEdit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *firstPasswordLabel_2;
    QLineEdit *newFirstPasswordLineEdit;
    QLabel *secondPasswordLabel_2;
    QLineEdit *newSecondPasswordLineEdit;
    QLabel *label;

    void setupUi(QDialog *SetPasswordDialog)
    {
        if (SetPasswordDialog->objectName().isEmpty())
            SetPasswordDialog->setObjectName(QString::fromUtf8("SetPasswordDialog"));
        SetPasswordDialog->resize(386, 225);
        buttonBox = new QDialogButtonBox(SetPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(SetPasswordDialog);
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

        formLayoutWidget_2 = new QWidget(SetPasswordDialog);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 70, 381, 71));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        firstPasswordLabel_2 = new QLabel(formLayoutWidget_2);
        firstPasswordLabel_2->setObjectName(QString::fromUtf8("firstPasswordLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, firstPasswordLabel_2);

        newFirstPasswordLineEdit = new QLineEdit(formLayoutWidget_2);
        newFirstPasswordLineEdit->setObjectName(QString::fromUtf8("newFirstPasswordLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, newFirstPasswordLineEdit);

        secondPasswordLabel_2 = new QLabel(formLayoutWidget_2);
        secondPasswordLabel_2->setObjectName(QString::fromUtf8("secondPasswordLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, secondPasswordLabel_2);

        newSecondPasswordLineEdit = new QLineEdit(formLayoutWidget_2);
        newSecondPasswordLineEdit->setObjectName(QString::fromUtf8("newSecondPasswordLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, newSecondPasswordLineEdit);

        label = new QLabel(SetPasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 150, 361, 31));
        label->setStyleSheet(QString::fromUtf8("font: bold"));

        retranslateUi(SetPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPasswordDialog)
    {
        SetPasswordDialog->setWindowTitle(QApplication::translate("SetPasswordDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        firstPasswordLabel->setText(QApplication::translate("SetPasswordDialog", "Old Password 1", 0, QApplication::UnicodeUTF8));
        secondPasswordLabel->setText(QApplication::translate("SetPasswordDialog", "Old Password 2", 0, QApplication::UnicodeUTF8));
        firstPasswordLabel_2->setText(QApplication::translate("SetPasswordDialog", "New Password 1", 0, QApplication::UnicodeUTF8));
        secondPasswordLabel_2->setText(QApplication::translate("SetPasswordDialog", "New Password 2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SetPasswordDialog", "Please enter your passwords", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetPasswordDialog: public Ui_SetPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPASSWORDDIALOG_H
