#include "NuclearFuelAssemblyInspection.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{

	//timePoint = QDateTime::currentDateTime().toString("yyyyMMddHHmmss");
//	qInstallMessageHandler(LogOutTxt);
	QApplication a(argc, argv);
	NuclearFuelAssemblyInspection w;
	w.show();
	return a.exec();
}
