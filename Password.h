#pragma once

#ifndef PASSWORD_H
#define PASSWORD_H

#include <QtWidgets/QMainWindow>
#include <QDialog>
#include "ui_Password.h"
#include <QMessageBox>
#include <QTextCodec>

#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QPushButton>

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


class Password : public QDialog
{
	Q_OBJECT

signals:

public slots:
	void login();


public:
	Password(QWidget *parent = 0);
	~Password();
	 QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	
private:
	Ui::Security ui;

};

#endif // ABOUTWIN_H
