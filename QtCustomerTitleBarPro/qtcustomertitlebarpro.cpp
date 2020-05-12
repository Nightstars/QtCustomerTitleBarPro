#include "qtcustomertitlebarpro.h"

QtCustomerTitleBarPro::QtCustomerTitleBarPro(QWidget *parent)
	: BaseWindow(parent)
{
	ui.setupUi(this);
    // 设置无边框
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
    // 初始化标题栏;
    initTitleBar();
}
void QtCustomerTitleBarPro::initTitleBar()
{
    // 设置标题栏跑马灯效果，可以不设置;
    //m_titleBar->setTitleRoll();
    m_titleBar->setTitleIcon(":/Resources/titleicon.png");
    m_titleBar->setTitleContent(QStringLiteral("SmartCode2.0"));
    m_titleBar->setButtonType(MIN_MAX_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}