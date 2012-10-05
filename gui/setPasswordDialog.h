#ifndef SETPASSWORDDIALOG
#define SETPASSWORDDIALOG
#include<QDialog>
#include<QString>
#include<string>
using std::string;
#include"ui_setPasswordDialog.h"
namespace Ui
{
	class SetPasswordDialog;
};
class SetPasswordDialog:public QDialog
{
	Q_OBJECT
	public:
		SetPasswordDialog();
		~SetPasswordDialog();
	private slots:
		void accept();
	private:
		Ui::SetPasswordDialog *ui;
};
#endif
