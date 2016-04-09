
// MfcWaterEffectDlg.h : 头文件
//

#pragma once
#include "watereffect/DIB.h"
#include "watereffect/stdex_vector.h"
#include "watereffect/WaterEffect.h"

// CMfcWaterEffectDlg 对话框
class CMfcWaterEffectDlg : public CDialogEx
{
// 构造
public:
	CMfcWaterEffectDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCWATEREFFECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CWaterEffect m_waterEffect;
	CDib m_renderSrc;
	CDib m_renderDest;
};

#define ID_EFFECTTIMER 1111
#define ID_DROPTIMER 1112
