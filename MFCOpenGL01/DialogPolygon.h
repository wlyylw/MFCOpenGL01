#pragma once
#include "afxcolorbutton.h"


// DialogPolygon �Ի���

class DialogPolygon : public CDialogEx
{
	DECLARE_DYNAMIC(DialogPolygon)

public:
	DialogPolygon(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DialogPolygon();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_POLYGON };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
    CMFCColorButton polygon_color;
    afx_msg void OnBnClickedMfccolorbutton1();
};