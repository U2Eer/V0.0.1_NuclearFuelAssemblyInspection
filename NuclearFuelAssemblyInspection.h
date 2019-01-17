#pragma once


#ifndef NUCLEARFUELASSEMBLYINSPECTION_H
#define NUCLEARFUELASSEMBLYINSPECTION_H

#include <QtWidgets/QMainWindow>
#include "ui_NuclearFuelAssemblyInspection.h"
#include <QAxObject>
#include <QDir>
#include <QFile>

#include <QtWidgets/QMainWindow>
#include "AboutWin.h"
#include "Password.h"

#include <QStandardItem>
#include <QTextCodec>
#include <vector>
#include <QtWidgets/QMainWindow>
#include <QString>
#include <QDebug>
#include <QLabel>
#include <QMessageBox>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QFileDialog>
#include <QColorDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QTime>
#include <QMouseEvent> 
#include <QDesktopServices> 
#include <QUrl>
#include <QtXml/QDomDocument>
#include <QFile>
#include <QFileDialog>
#include <QFileDevice>
#include <QTextStream>

#include <iostream>
#include <QFile>
#include <QString>
#include <cstdlib>
#include <QTextStream>
#include <QMutex>
#include <QDateTime>
//using namespace std;
//QMutex mutex;// 日志代码互斥
//QString timePoint;

// 日志生成
/*void LogOutTxt(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
#ifdef QT_NO_DEBUG
#else
	// 保证debug模式正常输出
	cout << msg.toStdString() << endl;
#endif
	mutex.lock();
	QString typeTxt;
	switch (type) {
	case QtDebugMsg:
		typeTxt = QString("Debug: "); // 调试信息
		break;
	case QtInfoMsg:
		typeTxt = QString("Info: ");
		break;
	case QtWarningMsg:
		typeTxt = QString("Warning: "); // 警告
		break;
	case QtCriticalMsg:
		typeTxt = QString("Critical: "); // 严重错误
		break;
	case QtFatalMsg:
		typeTxt = QString("Fatal: ");// 致命错误
		abort();
	default:
		break;
	}
	QString context_info = QString("File: (%1) Line:(%2)").arg(QString(context.file)).arg(context.line);
	QString current_time = QString("(%1)").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd"));
	QString log = QString("%1 %2 %3\r\n%4").arg(typeTxt).arg(context_info).arg(current_time).arg(msg);

	QFile file;
	QString path = QString("log%1.txt").arg(timePoint);
	file.setFileName(path);
	if (!file.open(QIODevice::ReadWrite | QIODevice::Append)) {
		QString erinfo = file.errorString();
		cout << erinfo.toStdString() << endl;
		return;
	}
	QTextStream out(&file);
	out << "\r\n" << log;
	// flush() 方法是用来刷新缓冲区的，即将缓冲区中的数据立刻写入文件，同时清空缓冲区，不需要是被动的等待输出缓冲区写入。
	file.flush();
	file.close();
	mutex.unlock();
}*/

class NuclearFuelAssemblyInspection : public QMainWindow
{
	Q_OBJECT

public:
	bool dianji = 0;
	QString file_path;
	bool open_info = 0;

	NuclearFuelAssemblyInspection(QWidget *parent = Q_NULLPTR);
	//~NuclearFuelAssemblyInspection();
	struct newword
	{
		int a[2] = { -1,-1 };
		QString name   ;
		QString number   ;
		QString gongjian ;
		QString xuliehao1 ;
		QString xuliehao2 ;
		double baoguang1 ;
		double zhenyi1 ;
		double baoguang2 ;
		double zhenyi2 ;
		bool save_if = 0;
	};
	newword* newword1 = new newword();
	struct jiancejiaguo
	{
		bool info;
		double part1_x;
		double part1_y;
		double part1_z;
		double part1_xj;
		double part1_yj;
		double part1_zj;

		double part2_x;
		double part2_y;
		double part2_z;
		double part2_xj;
		double part2_yj;
		double part2_zj;
		double niubai;
		double wanqu;
		
	}jiancejiaguo1;
	QString opentime;

	QString closetime;

	QTreeWidgetItem *item1;
	//QTextCodec * BianMa = QTextCodec::codecForName("GBK");
public slots: void Selecteditem(QTreeWidgetItem*, int);
              void closeEditor();
              void save();

private:
	Ui::NuclearFuelAssemblyInspectionClass ui;
	void open();
	void add();
	void close();
	void clear();
	void save_as();



	void Measure_Connect();
	void Measure_Reconnect();
    void Measure_Disconnect();
    void Measure_3D_Measurement();
	void Measure_System_Calibration();

	void View_Zoom_to_Data();
	void View_Front();
	void View_Back();
	void View_Left();
	void View_Right();
	void View_Top(); 
	void View_Bottom();
    void View_Isometric();
	void View_Fit_All();

	void Report_Excel();

	void Help_About();
    // Cloud_point mycloud;

};
#endif // ABOUTWIN_H