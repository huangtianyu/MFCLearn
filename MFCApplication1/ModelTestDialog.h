#pragma once


// CModelTestDialog 对话框

class CModelTestDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CModelTestDialog)

public:
	CModelTestDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CModelTestDialog();

// 对话框数据
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
