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
		accept();//�رմ��壬�����÷���ֵΪAccepted
	}

	else
	{                            
		QMessageBox::warning(this, BianMa->toUnicode("����"), BianMa->toUnicode("�������"), QMessageBox::Yes);

		// ������������
		ui.lineEdit->clear();
		ui.lineEdit_2->clear();

		//��궨λ
		ui.lineEdit->setFocus();
	}

}