#pragma once
//#include <easyx.h>
#include <Windows.h>

// �����ߵ���ʽ
typedef void* LINESTYLE_cpp;

typedef void* FILLSTYLE_cpp;

// ����ͼ�����
typedef void* IMAGE_cpp;
//����������
typedef void* MOUSEMSG_cpp;

HWND initgraph_cpp(int width, int height, int flag = NULL);
void closegraph_cpp();
void cleardevice_cpp();
void clearcliprgn_cpp();
void getaspectratio_cpp(
	float *pxasp,
	float *pyasp
);
void graphdefaults_cpp();
void setaspectratio_cpp(
	float xasp,
	float yasp
);
void setcliprgn_cpp(HRGN hrgn);
// ��ɫģ��ת������
COLORREF RGBtoGRAY_cpp(COLORREF rgb);
void RGBtoHSL_cpp(COLORREF rgb, float *H, float *S, float *L);
void RGBtoHSV_cpp(COLORREF rgb, float *H, float *S, float *V);
COLORREF HSLtoRGB_cpp(float H, float S, float L);
COLORREF HSVtoRGB_cpp(float H, float S, float V);

COLORREF getlinecolor_cpp();			// ��ȡ��ǰ������ɫ
void setlinecolor_cpp(COLORREF color);	// ���õ�ǰ������ɫ
COLORREF gettextcolor_cpp();			// ��ȡ��ǰ������ɫ
void settextcolor_cpp(COLORREF color);	// ���õ�ǰ������ɫ
COLORREF getfillcolor_cpp();			// ��ȡ��ǰ�����ɫ
void setfillcolor_cpp(COLORREF color);	// ���õ�ǰ�����ɫ
COLORREF getbkcolor_cpp();				// ��ȡ��ǰ��ͼ����ɫ
void setbkcolor_cpp(COLORREF color);	// ���õ�ǰ��ͼ����ɫ
int  getbkmode_cpp();					// ��ȡ�������ģʽ
void setbkmode_cpp(int mode);			// ���ñ������ģʽ

int  getrop2_cpp();						// ��ȡǰ���Ķ�Ԫ��դ����ģʽ
void setrop2_cpp(int mode);				// ����ǰ���Ķ�Ԫ��դ����ģʽ
int  getpolyfillmode_cpp();				// ��ȡ��������ģʽ
void setpolyfillmode_cpp(int mode);		// ���ö�������ģʽ

// ��ͼ����

COLORREF getpixel_cpp(int x, int y);				// ��ȡ�����ɫ
void putpixel_cpp(int x, int y, COLORREF color);	// ����

void moveto_cpp(int x, int y);						// �ƶ���ǰ��(��������)
void moverel_cpp(int dx, int dy);					// �ƶ���ǰ��(�������)

void line_cpp(int x1, int y1, int x2, int y2);		// ����
void linerel_cpp(int dx, int dy);					// ����(���������)
void lineto_cpp(int x, int y);						// ����(����������)

void rectangle_cpp(int left, int top, int right, int bottom);	// ������
void fillrectangle_cpp(int left, int top, int right, int bottom);	// ��������(�б߿�)
void solidrectangle_cpp(int left, int top, int right, int bottom);	// ��������(�ޱ߿�)
void clearrectangle_cpp(int left, int top, int right, int bottom);	// ��վ�������

void circle_cpp(int x, int y, int radius);		// ��Բ
void fillcircle_cpp(int x, int y, int radius);		// �����Բ(�б߿�)
void solidcircle_cpp(int x, int y, int radius);		// �����Բ(�ޱ߿�)
void clearcircle_cpp(int x, int y, int radius);		// ���Բ������

void ellipse_cpp(int left, int top, int right, int bottom);	// ����Բ
void fillellipse_cpp(int left, int top, int right, int bottom);	// �������Բ(�б߿�)
void solidellipse_cpp(int left, int top, int right, int bottom);	// �������Բ(�ޱ߿�)
void clearellipse_cpp(int left, int top, int right, int bottom);	// �����Բ������

void roundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// ��Բ�Ǿ���
void fillroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// �����Բ�Ǿ���(�б߿�)
void solidroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// �����Բ�Ǿ���(�ޱ߿�)
void clearroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// ���Բ�Ǿ�������

void arc_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// ����Բ��(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
void pie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// ����Բ����(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
void fillpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// �������Բ����(�б߿�)
void solidpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// �������Բ����(�ޱ߿�)
void clearpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// �����Բ��������

void polyline_cpp(const POINT *points, int num);								// ��������������
void polygon_cpp(const POINT *points, int num);								// �������
void fillpolygon_cpp(const POINT *points, int num);								// �����Ķ����(�б߿�)
void solidpolygon_cpp(const POINT *points, int num);								// �����Ķ����(�ޱ߿�)
void clearpolygon_cpp(const POINT *points, int num);								// ��ն��������

void polybezier_cpp(const POINT *points, int num);									// ������������
void floodfill_cpp(int x, int y, COLORREF color, int filltype = FLOODFILLBORDER);	// �������


																					// ������غ���

void outtext_cpp(LPCTSTR str);					// �ڵ�ǰλ������ַ���
void outtext_cpp(TCHAR c);						// �ڵ�ǰλ������ַ�
void outtextxy_cpp(int x, int y, LPCTSTR str);	// ��ָ��λ������ַ���
void outtextxy_cpp(int x, int y, TCHAR c);		// ��ָ��λ������ַ�
int textwidth_cpp(LPCTSTR str);					// ��ȡ�ַ���ռ�õ����ؿ�
int textwidth_cpp(TCHAR c);						// ��ȡ�ַ�ռ�õ����ؿ�
int textheight_cpp(LPCTSTR str);				// ��ȡ�ַ���ռ�õ����ظ�
int textheight_cpp(TCHAR c);					// ��ȡ�ַ�ռ�õ����ظ�
int drawtext_cpp(LPCTSTR str, RECT* pRect, UINT uFormat);	// ��ָ����������ָ����ʽ����ַ���
int drawtext_cpp(TCHAR c, RECT* pRect, UINT uFormat);		// ��ָ����������ָ����ʽ����ַ�

void getlinestyle_cpp(LINESTYLE_cpp* pstyle);						// ��ȡ��ǰ������ʽ
void setlinestyle_cpp(const LINESTYLE_cpp* pstyle);					// ���õ�ǰ������ʽ
void setlinestyle_cpp(int style, int thickness = 1, const DWORD *puserstyle = NULL, DWORD userstylecount = 0);	// ���õ�ǰ������ʽ
void getfillstyle_cpp(FILLSTYLE_cpp* pstyle);						// ��ȡ��ǰ�����ʽ
void setfillstyle_cpp(const FILLSTYLE_cpp* pstyle);					// ���õ�ǰ�����ʽ
void setfillstyle_cpp(int style, long hatch = NULL, IMAGE_cpp* ppattern = NULL);		// ���õ�ǰ�����ʽ
void setfillstyle_cpp(BYTE* ppattern8x8);						// ���õ�ǰ�����ʽ
#define bool int
extern int MouseHit_cpp(void);			// ����Ƿ���������Ϣ
extern void __cdecl GetMouseMsg_cpp(void);		// ��ȡһ�������Ϣ�����û�У��͵ȴ�
void FlushMouseMsgBuffer_cpp(void);	// ��������Ϣ������
extern UINT __cdecl GetMouseMsg_cpp_getuMsg(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkCtrl(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkShift(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkLButton(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkMButton(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkRButton(void);
extern short __cdecl Get_MouseMsg_cpp_getx(void);
extern short __cdecl Get_MouseMsg_cpp_gety(void);


LINESTYLE_cpp createLineStyle();
LINESTYLE_cpp createLineStyle_from_one(LINESTYLE_cpp s);
void setLineStyle_style(LINESTYLE_cpp s, DWORD	style);
void setLineStyle_thickness(LINESTYLE_cpp s, DWORD	thickness);
void setLineStyle_puserstyle(LINESTYLE_cpp s, DWORD *puserstyle);
void setLineStyle_userstylecount(LINESTYLE_cpp s, DWORD userstylecount);
FILLSTYLE_cpp createFillStyle();
FILLSTYLE_cpp createFillStyle_from_one(FILLSTYLE_cpp s);
void setFillStyle_style(FILLSTYLE_cpp s, int style);
void setFillStyle_hatch(FILLSTYLE_cpp s, long hatch);
void setFillStyle_ppattern(FILLSTYLE_cpp s, IMAGE_cpp *ppattern);

IMAGE_cpp CreateIMAGE(int _w, int _h);
IMAGE_cpp CreateIMAGE_from_one(IMAGE_cpp i);
int GetIMAGE_width(IMAGE_cpp i);
int GetIMAGE_height(IMAGE_cpp i);
void ResizeIMAGE(IMAGE_cpp i, int _w, int _h);

void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace);
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
void settextstyle_cpp(const LOGFONT *font);	// ���õ�ǰ������ʽ
void gettextstyle_cpp(LOGFONT *font);		// ��ȡ��ǰ������ʽ


//δд
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pImgFile, int nWidth = 0, int nHeight = 0, bool bResize = false);					// ��ͼƬ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth = 0, int nHeight = 0, bool bResize = false);	// ����Դ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
void saveimage_cpp(LPCTSTR pImgFile, IMAGE_cpp* pImg = NULL);																		// ����ͼ��(bmp/gif/jpg/png/tif)
void getimage_cpp(IMAGE_cpp *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight);												// �ӵ�ǰ��ͼ�豸��ȡͼ��
void putimage_cpp(int dstX, int dstY, const IMAGE_cpp *pSrcImg, DWORD dwRop = SRCCOPY);												// ����ͼ����Ļ
void putimage_cpp(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE_cpp *pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY);		// ����ͼ����Ļ(ָ�����)
void rotateimage_cpp(IMAGE_cpp *dstimg, IMAGE_cpp *srcimg, double radian, COLORREF bkcolor = BLACK, bool autosize = false, bool highquality = true);// ��תͼ��
void Resize_cpp(IMAGE_cpp* pImg, int width, int height);	// ������ͼ�豸�Ĵ�С
DWORD* GetImageBuffer_cpp(IMAGE_cpp* pImg = NULL);			// ��ȡ��ͼ�豸���Դ�ָ��
IMAGE_cpp* GetWorkingImage_cpp();							// ��ȡ��ǰ��ͼ�豸
void SetWorkingImage_cpp(IMAGE_cpp* pImg = NULL);			// ���õ�ǰ��ͼ�豸
HDC GetImageHDC_cpp(IMAGE_cpp* pImg = NULL);				// ��ȡ��ͼ�豸���(HDC)

													//δд
													// ��������

int	getwidth_cpp();			// ��ȡ��ͼ�����
int	getheight_cpp();		// ��ȡ��ͼ���߶�
int	getx_cpp();				// ��ȡ��ǰ x ����
int	gety_cpp();				// ��ȡ��ǰ y ����

void BeginBatchDraw_cpp();	// ��ʼ��������
void FlushBatchDraw_cpp();	// ִ��δ��ɵĻ�������
void FlushBatchDraw_cpp(int left, int top, int right, int bottom);	// ִ��ָ��������δ��ɵĻ�������
void EndBatchDraw_cpp();	// �����������ƣ���ִ��δ��ɵĻ�������
void EndBatchDraw_cpp(int left, int top, int right, int bottom);	// �����������ƣ���ִ��ָ��������δ��ɵĻ�������

HWND GetHWnd_cpp();								// ��ȡ��ͼ���ھ��(HWND)
TCHAR* GetEasyXVer_cpp();						// ��ȡ EasyX ��ǰ�汾

											// ��ȡ�û�����
bool InputBox_cpp(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt = NULL, LPCTSTR pTitle = NULL, LPCTSTR pDefault = NULL, int width = 0, int height = 0, bool bOnlyOK = true);


void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace);
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
void setfont_cpp(const LOGFONT *font);	// ���õ�ǰ������ʽ
void getfont_cpp(LOGFONT *font);
// ��ȡ��ǰ������ʽ
HWND initgraph_cpp_with_bgi(int* gdriver, int* gmode, char* path);

void bar_cpp(int left, int top, int right, int bottom);		// ���ޱ߿�������
void bar3d_cpp(int left, int top, int right, int bottom, int depth, bool topflag);	// ���б߿���ά������

void drawpoly_cpp(int numpoints, const int *polypoints);	// �������
void fillpoly_cpp(int numpoints, const int *polypoints);	// �����Ķ����

int getmaxx_cpp();					// ��ȡ���Ŀ��ֵ
int getmaxy_cpp();					// ��ȡ���ĸ߶�ֵ

COLORREF getcolor_cpp();			// ��ȡ��ǰ��ͼǰ��ɫ
void setcolor_cpp(COLORREF color);	// ���õ�ǰ��ͼǰ��ɫ

void setwritemode_cpp(int mode);	// ����ǰ���Ķ�Ԫ��դ����ģʽ

