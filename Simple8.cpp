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
// 1. 틀을 만든다.
class CMainFrmae : public CFrameWnd {
};
class CMyApp : public CWinApp {
};
CMyApp theApp;
// 2. CMyApp::InitInstance()를 오버라이딩하고
  CMainFrame* Frm = new CMainFrame();
  m_pMainWnd = Frm;
  Frm->ShowWindow(TRUE);
// 3. 생성자에 Create()추가
public:
	CMainFrame() { Create(NULL, L"Hi !"); }
// 4. 실행테스트
// 5. CMainFrame에
DECLARE_MESSAGE_MAP()
// 6. 외부에
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
END_MESSAGE_MAP()
//7. CMainFrame에 WM_PAINT를 구현
*/