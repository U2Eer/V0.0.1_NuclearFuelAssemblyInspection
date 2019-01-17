#include "Password.h"

Password::Password(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	QObject::connect(ui.buttonBox,SIGNAL(accepted()), this, SLOT(login()));
	QObject::connect(ui.buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

}

Password::~Password()
{

}
void Password::login()
{
	
	if (ui.lineEdit->text().trimmed() == tr("123456") && ui.lineEdit_2->text() == tr("123456"))
	{
		QMessageBox::information(this, tr("System_Calibration "), tr("Calibration..."));
		accept();//关闭窗体，并设置返回值为Accepted
	}

	else
	{                            
		QMessageBox::warning(this, BianMa->toUnicode("警告"), BianMa->toUnicode("密码错误！"), QMessageBox::Yes);

		// 清空输入框内容
		ui.lineEdit->clear();
		ui.lineEdit_2->clear();

		//光标定位
		ui.lineEdit->setFocus();
	}

}