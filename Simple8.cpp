#include<afxwin.h>
class CMyFrm : public CFrameWnd {
public:
	CMyFrm() {
		Create(NULL, L"Hi !");
	}
	DECLARE_MESSAGE_MAP()
	void OnPaint();
};
class CMy : public CWinApp {
	BOOL InitInstance() {
		CMyFrm* Frm = new CMyFrm();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMy theApp;
BEGIN_MESSAGE_MAP(CMyFrm, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()
void CMyFrm::OnPaint(){
	CClientDC dc(this);
	dc.Ellipse(100, 100, 200, 200);
}