#ifndef NEWPASSWORDDIALOG
#define NEWPASSWORDDIALOG
#include<QDialog>
#include<QString>
#include<string>
using std::string;
#include"ui_newPasswordDialog.h"
namespace Ui
{
	class NewPasswordDialog;
};
class NewPasswordDialog:public QDialog
{
	Q_OBJECT
	public:
		NewPasswordDialog();
		~NewPasswordDialog();
	private slots:
		void accept();
	private:
		Ui::NewPasswordDialog *ui;
};
#endif
