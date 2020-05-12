#include "qtcustomertitlebarpro.h"

QtCustomerTitleBarPro::QtCustomerTitleBarPro(QWidget *parent)
	: BaseWindow(parent)
{
	ui.setupUi(this);
    // �����ޱ߿�
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
    // ��ʼ��������;
    initTitleBar();
}
void QtCustomerTitleBarPro::initTitleBar()
{
    // ���ñ����������Ч�������Բ�����;
    //m_titleBar->setTitleRoll();
    m_titleBar->setTitleIcon(":/Resources/titleicon.png");
    m_titleBar->setTitleContent(QStringLiteral("SmartCode2.0"));
    m_titleBar->setButtonType(MIN_MAX_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}