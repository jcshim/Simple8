#include<afxwin.h>
class CMainFrame : public CFrameWnd {
public:
	CMainFrame() { Create(NULL, L"Hi !"); }
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class CMyApp : public CWinApp {
public:
	virtual BOOL InitInstance() {
		CMainFrame* Frm = new CMainFrame();
		m_pMainWnd = Frm;
		Frm->ShowWindow(TRUE);
		return CWinApp::InitInstance();
	}
};
CMyApp theApp;
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

void CMainFrame::OnPaint()
{
	CPaintDC dc(this);
	dc.Rectangle(20, 20, 80, 80);					  
}
/*
CMy theApp;
// 1. Ʋ�� �����.
class CMainFrmae : public CFrameWnd {
};
class CMyApp : public CWinApp {
};
CMyApp theApp;
// 2. CMyApp::InitInstance()�� �������̵��ϰ�
  CMainFrame* Frm = new CMainFrame();
  m_pMainWnd = Frm;
  Frm->ShowWindow(TRUE);
// 3. �����ڿ� Create()�߰�
public:
	CMainFrame() { Create(NULL, L"Hi !"); }
// 4. �����׽�Ʈ
// 5. CMainFrame��
DECLARE_MESSAGE_MAP()
// 6. �ܺο�
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
END_MESSAGE_MAP()
//7. CMainFrame�� WM_PAINT�� ����
*/