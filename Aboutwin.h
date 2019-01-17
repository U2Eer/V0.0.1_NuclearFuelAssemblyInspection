#pragma once
#ifndef ABOUTWIN_H
#define ABOUTWIN_H

#include <QWidget>
#include <QDialog>
#include "ui_Aboutwin.h"


class Aboutwin : public QDialog
{
	Q_OBJECT

public:
	Aboutwin(QWidget *parent = 0);
	~Aboutwin();

private:
	Ui::Aboutwin ui;
};

#endif // ABOUTWIN_H
