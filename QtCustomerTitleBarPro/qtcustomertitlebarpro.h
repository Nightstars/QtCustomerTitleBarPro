#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtcustomertitlebarpro.h"
#include "basewindow.h"



class QtCustomerTitleBarPro : public  BaseWindow
{
	Q_OBJECT

public:
	QtCustomerTitleBarPro(QWidget *parent = 0);
private:
	void initTitleBar();
private:
	Ui::QtCustomerTitleBarProClass ui;
};
