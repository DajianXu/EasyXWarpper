#include <graphics.h>
#include "CPP.h"
#define bool int
#pragma warning(disable:4800)
HWND initgraph_cpp(int width,int height,int flag ) {
	return initgraph(width, height, flag);
}
MOUSEMSG *msg;
void closegraph_cpp() {
	return closegraph();
}
void cleardevice_cpp() {
	cleardevice();
}
void clearcliprgn_cpp() {
	clearcliprgn();
}
void getaspectratio_cpp(
	float *pxasp,
	float *pyasp
) {
	getaspectratio(pxasp, pyasp);
}
void graphdefaults_cpp() {
	graphdefaults();
}
void setaspectratio_cpp(
	float xasp,
	float yasp
) {
	setaspectratio(xasp, yasp);
}
void setcliprgn_cpp(HRGN hrgn) {
	setcliprgn(hrgn);
}
// ��ɫģ��ת������
COLORREF RGBtoGRAY_cpp(COLORREF rgb) {
	return RGBtoGRAY(rgb);
}
void RGBtoHSL_cpp(COLORREF rgb, float *H, float *S, float *L) {
	RGBtoHSL(rgb, H, S, L);
}
void RGBtoHSV_cpp(COLORREF rgb, float *H, float *S, float *V) {
	RGBtoHSV(rgb, H, S, V);
}
COLORREF HSLtoRGB_cpp(float H, float S, float L) {
	return (HSLtoRGB(H, S, L));
}
COLORREF HSVtoRGB_cpp(float H, float S, float V) {
	return HSVtoRGB(H, S, V);
}


COLORREF getlinecolor_cpp() {
	return getlinecolor();
}// ��ȡ��ǰ������ɫ
void setlinecolor_cpp(COLORREF color) {
	setlinecolor(color);
}	// ���õ�ǰ������ɫ
COLORREF gettextcolor_cpp() {
	return gettextcolor();
}			// ��ȡ��ǰ������ɫ
void settextcolor_cpp(COLORREF color) {
	settextcolor(color);
}	// ���õ�ǰ������ɫ
COLORREF getfillcolor_cpp() {
	return getfillcolor();
}			// ��ȡ��ǰ�����ɫ
void setfillcolor_cpp(COLORREF color) {
	setfillcolor(color);
}	// ���õ�ǰ�����ɫ
COLORREF getbkcolor_cpp() {
	return getbkcolor();
}				// ��ȡ��ǰ��ͼ����ɫ
void setbkcolor_cpp(COLORREF color) {
	setbkcolor(color);
}	// ���õ�ǰ��ͼ����ɫ
int  getbkmode_cpp() {
	return getbkmode();
}					// ��ȡ�������ģʽ
void setbkmode_cpp(int mode) {
	setbkmode(mode);
}			// ���ñ������ģʽ


int  getrop2_cpp() {
	return getrop2();
}						// ��ȡǰ���Ķ�Ԫ��դ����ģʽ
void setrop2_cpp(int mode){
	setrop2(mode);
}			// ����ǰ���Ķ�Ԫ��դ����ģʽ
int  getpolyfillmode_cpp() {
	return getpolyfillmode();
}				// ��ȡ��������ģʽ
void setpolyfillmode_cpp(int mode) {
	setpolyfillmode(mode);
}		// ���ö�������ģʽ


COLORREF getpixel_cpp(int x, int y) {
	return getpixel(x, y);
}				// ��ȡ�����ɫ
void putpixel_cpp(int x, int y, COLORREF color) {
	putpixel(x, y, color);
}	// ����

void moveto_cpp(int x, int y) {
	moveto(x, y);
}						// �ƶ���ǰ��(��������)
void moverel_cpp(int dx, int dy) {
	moverel(dx, dy);
}					// �ƶ���ǰ��(�������)

void line_cpp(int x1, int y1, int x2, int y2) {
	line(x1, y1, x2, y2);
}		// ����
void linerel_cpp(int dx, int dy) {
	linerel(dx, dy);
}					// ����(���������)
void lineto_cpp(int x, int y) {
	lineto(x, y);
}						// ����(����������)

void rectangle_cpp(int left, int top, int right, int bottom) {
	rectangle(left, top, right, bottom);
}	// ������
void fillrectangle_cpp(int left, int top, int right, int bottom) {
	fillrectangle(left, top, right, bottom);
}	// ��������(�б߿�)
void solidrectangle_cpp(int left, int top, int right, int bottom) {
	solidrectangle(left, top, right, bottom);
}	// ��������(�ޱ߿�)
void clearrectangle_cpp(int left, int top, int right, int bottom) {
	clearrectangle(left, top, right, bottom);
}	// ��վ�������

void circle_cpp(int x, int y, int radius) {
	circle(x, y, radius);
}		// ��Բ
void fillcircle_cpp(int x, int y, int radius) {
	fillcircle(x, y, radius);
}		// �����Բ(�б߿�)
void solidcircle_cpp(int x, int y, int radius) {
	solidcircle(x, y, radius);
}		// �����Բ(�ޱ߿�)
void clearcircle_cpp(int x, int y, int radius) {
	clearcircle(x, y, radius);
}		// ���Բ������

void ellipse_cpp(int left, int top, int right, int bottom) {
	ellipse(left, top, right, bottom);
}	// ����Բ
void fillellipse_cpp(int left, int top, int right, int bottom) {
	fillellipse(left, top, right, bottom);
}	// �������Բ(�б߿�)
void solidellipse_cpp(int left, int top, int right, int bottom) {
	solidellipse(left, top, right, bottom);
}	// �������Բ(�ޱ߿�)
void clearellipse_cpp(int left, int top, int right, int bottom) {
	clearellipse(left, top, right, bottom);
}	// �����Բ������

void roundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	roundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// ��Բ�Ǿ���
void fillroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	fillroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// �����Բ�Ǿ���(�б߿�)
void solidroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	solidroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// �����Բ�Ǿ���(�ޱ߿�)
void clearroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	clearroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}	// ���Բ�Ǿ�������

void arc_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	arc(left, top, right, bottom, stangle, endangle);
}	// ����Բ��(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
void pie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	pie(left, top, right, bottom, stangle, endangle);
}	// ����Բ����(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
void fillpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie(left, top, right, bottom, stangle, endangle);
}	// �������Բ����(�б߿�)
void solidpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	solidpie(left, top, right, bottom, stangle, endangle);
}	// �������Բ����(�ޱ߿�)
void clearpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	clearpie(left, top, right, bottom, stangle, endangle);
}	// �����Բ��������

void polyline_cpp(const POINT *points, int num) {
	polyline(points, num);
}								// ��������������
void polygon_cpp(const POINT *points, int num) {
	polygon(points, num);
}								// �������
void fillpolygon_cpp(const POINT *points, int num) {
	fillpolygon(points, num);
}								// �����Ķ����(�б߿�)
void solidpolygon_cpp(const POINT *points, int num) {
	solidpolygon(points, num);
}								// �����Ķ����(�ޱ߿�)
void clearpolygon_cpp(const POINT *points, int num) {
	clearpolygon(points, num);
}								// ��ն��������

void polybezier_cpp(const POINT *points, int num) {
	polybezier(points, num);
}									// ������������
void floodfill_cpp(int x, int y, COLORREF color, int filltype) {
	floodfill(x, y, color, filltype);
}	// �������


void outtext_cpp(LPCTSTR str) {
	outtext(str);
}					// �ڵ�ǰλ������ַ���
void outtext_cpp(TCHAR c) {
	outtext(c);
}						// �ڵ�ǰλ������ַ�
void outtextxy_cpp(int x, int y, LPCTSTR str) {
	outtextxy(x, y, str);
}	// ��ָ��λ������ַ���
void outtextxy_cpp(int x, int y, TCHAR c) {
	outtextxy(x, y, c);
}// ��ָ��λ������ַ�
int textwidth_cpp(LPCTSTR str) {
	return textwidth(str);
}					// ��ȡ�ַ���ռ�õ����ؿ�
int textwidth_cpp(TCHAR c) {
	return textwidth(c);
}						// ��ȡ�ַ�ռ�õ����ؿ�
int textheight_cpp(LPCTSTR str){
	return textheight(str);
}				// ��ȡ�ַ���ռ�õ����ظ�
int textheight_cpp(TCHAR c) {
	return textheight(c);
}					// ��ȡ�ַ�ռ�õ����ظ�
int drawtext_cpp(LPCTSTR str, RECT* pRect, UINT uFormat) {
	return drawtext(str, pRect, uFormat);
}
	// ��ָ����������ָ����ʽ����ַ���
int drawtext_cpp(TCHAR c, RECT* pRect, UINT uFormat) {
	return drawtext(c, pRect, uFormat);
}		// ��ָ����������ָ����ʽ����ַ�

void getlinestyle_cpp(LINESTYLE_cpp *pstyle) {
	LINESTYLE *style = (LINESTYLE*)pstyle;
	getlinestyle(style);
}						// ��ȡ��ǰ������ʽ
void setlinestyle_cpp(const LINESTYLE_cpp* pstyle) {
	setlinestyle((LINESTYLE*)pstyle);
}					// ���õ�ǰ������ʽ
void setlinestyle_cpp(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount) {
	setlinestyle(style, thickness, puserstyle, userstylecount);
}	// ���õ�ǰ������ʽ
void getfillstyle_cpp(FILLSTYLE_cpp* pstyle) {
	getfillstyle((FILLSTYLE*)pstyle);
}						// ��ȡ��ǰ�����ʽ
void setfillstyle_cpp(const FILLSTYLE_cpp* pstyle) {
	setfillstyle((FILLSTYLE*)pstyle);
}					// ���õ�ǰ�����ʽ
void setfillstyle_cpp(int style, long hatch, IMAGE_cpp* ppattern){
	setfillstyle(style, hatch, (IMAGE*)ppattern);
}		// ���õ�ǰ�����ʽ
void setfillstyle_cpp(BYTE* ppattern8x8) {
	setfillstyle(ppattern8x8);
}						// ���õ�ǰ�����ʽ

int MouseHit_cpp(void) {
	return MouseHit();
}			// ����Ƿ���������Ϣ
void GetMouseMsg_cpp(void) {
	msg = &(GetMouseMsg());
}		// ��ȡһ�������Ϣ�����û�У��͵ȴ�
UINT GetMouseMsg_cpp_getuMsg(void) {
	return msg->uMsg;
}
bool Get_MouseMsg_cpp_getmkCtrl(void) {
	return msg->mkCtrl;
}
bool Get_MouseMsg_cpp_getmkShift(void) {
	return msg->mkShift;
}
bool Get_MouseMsg_cpp_getmkLButton(void) {
	return msg->mkLButton;
}
bool Get_MouseMsg_cpp_getmkMButton(void) {
	return msg->mkMButton;
}
bool Get_MouseMsg_cpp_getmkRButton(void) {
	return msg->mkRButton;
}
short Get_MouseMsg_cpp_getx(void) {
	return msg->x;
}
short  Get_MouseMsg_cpp_gety(void) {
	return msg->y;
}

void FlushMouseMsgBuffer_cpp(void) {
	return FlushMouseMsgBuffer();
}	// ��������Ϣ������

LINESTYLE_cpp createLineStyle() {
	return (void*)(new LINESTYLE());
}
LINESTYLE_cpp createLineStyle_from_one(LINESTYLE_cpp s) {
	return (void*)(new LINESTYLE(*(LINESTYLE*)s));
}
void setLineStyle_style(LINESTYLE_cpp s, DWORD	style) {
	(*(LINESTYLE*)s).style = style;
}
void setLineStyle_thickness(LINESTYLE_cpp s, DWORD	thickness) {
	(*(LINESTYLE*)s).thickness = thickness;
}
void setLineStyle_puserstyle(LINESTYLE_cpp s, DWORD *puserstyle) {
	(*(LINESTYLE*)s).puserstyle = puserstyle;
}
void setLineStyle_userstylecount(LINESTYLE_cpp s, DWORD userstylecount) {
	(*(LINESTYLE*)s).userstylecount = userstylecount;
}
FILLSTYLE_cpp createFillStyle() {
	return (void*)(new FILLSTYLE());
}
FILLSTYLE_cpp createFillStyle_from_one(FILLSTYLE_cpp s) {
	return (void*)(new FILLSTYLE(*(FILLSTYLE*)s));
}
void setFillStyle_style(FILLSTYLE_cpp s, int style) {
	(*(FILLSTYLE*)s).style = style;
}
void setFillStyle_hatch(FILLSTYLE_cpp s, long hatch) {
	(*(FILLSTYLE*)s).hatch = hatch;
}
void setFillStyle_ppattern(FILLSTYLE_cpp s, IMAGE_cpp *ppattern) {
	(*(FILLSTYLE*)s).ppattern = ((IMAGE*)ppattern);
}
IMAGE_cpp CreateIMAGE(int _w,int _h) {
	return (void*)(new IMAGE(_w,_h));
}
IMAGE_cpp CreateIMAGE_from_one(IMAGE_cpp i) {
	return (void*)(new IMAGE(*(IMAGE*)i));
}
int GetIMAGE_width(IMAGE_cpp i) {
	return ((IMAGE*)i)->getwidth();
}
int GetIMAGE_height(IMAGE_cpp i) {
	return ((IMAGE*)i)->getheight();
}
void ResizeIMAGE(IMAGE_cpp i, int _w, int _h) {
	return ((IMAGE*)i)->Resize(_w, _h);
}




void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return settextstyle(nHeight, nWidth, lpszFace);
}
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	return settextstyle(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	return settextstyle(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
}
void settextstyle_cpp(const LOGFONT *font) {
	return settextstyle(font);
}	// ���õ�ǰ������ʽ
void gettextstyle_cpp(LOGFONT *font) {
	return settextstyle(font);
}		// ��ȡ��ǰ������ʽ



void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pImgFile, int nWidth , int nHeight, bool bResize) {
	return loadimage(*(IMAGE**)pDstImg,pImgFile,nWidth , nHeight, (bool)bResize);
}					// ��ͼƬ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth, int nHeight, bool bResize) {
	return loadimage((*(IMAGE**)pDstImg), pResName, nWidth, nHeight, bResize);
}	// ����Դ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
void saveimage_cpp(LPCTSTR pImgFile, IMAGE_cpp* pImg) {
	return saveimage(pImgFile,*(IMAGE**)pImg);
}																		// ����ͼ��(bmp/gif/jpg/png/tif)
void getimage_cpp(IMAGE_cpp * pDstImg, int srcX, int srcY, int srcWidth, int srcHeight)
{
	return getimage(*(IMAGE**)pDstImg, srcX, srcY, srcWidth, srcHeight);
}
// �ӵ�ǰ��ͼ�豸��ȡͼ��
void putimage_cpp(int dstX, int dstY, const IMAGE_cpp *pSrcImg, DWORD dwRop) {
	return putimage(dstX, dstY, *(IMAGE**)pSrcImg, dwRop);
}												// ����ͼ����Ļ
void putimage_cpp(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE_cpp *pSrcImg, int srcX, int srcY, DWORD dwRop) {
	return putimage(dstX, dstY, dstWidth, dstHeight, *(IMAGE**)pSrcImg, srcX, srcY, dwRop);
}		// ����ͼ����Ļ(ָ�����)
void rotateimage_cpp(IMAGE_cpp *dstimg, IMAGE_cpp *srcimg, double radian, COLORREF bkcolor, bool autosize, bool highquality) {
	return rotateimage((*(IMAGE**)dstimg), (*(IMAGE**)srcimg), radian, bkcolor, autosize, highquality);
}
// ��תͼ��
void Resize_cpp(IMAGE_cpp* pImg, int width, int height) {
	return Resize((*(IMAGE**)pImg), width, height);
}	// ������ͼ�豸�Ĵ�С
DWORD* GetImageBuffer_cpp(IMAGE_cpp* pImg) {
	return GetImageBuffer((*(IMAGE**)pImg));
}			// ��ȡ��ͼ�豸���Դ�ָ��
IMAGE_cpp* GetWorkingImage_cpp() {
	return (void**)GetWorkingImage();
}							// ��ȡ��ǰ��ͼ�豸
void SetWorkingImage_cpp(IMAGE_cpp* pImg) {
	return SetWorkingImage(*(IMAGE**)pImg);
}			// ���õ�ǰ��ͼ�豸
HDC GetImageHDC_cpp(IMAGE_cpp* pImg) {
	return GetImageHDC(*(IMAGE**)pImg);
}				// ��ȡ��ͼ�豸���(HDC)

														//δд
														// ��������

int	getwidth_cpp() {
	return getwidth();
}			// ��ȡ��ͼ�����
int	getheight_cpp() {
	return getheight();
}		// ��ȡ��ͼ���߶�
int	getx_cpp() {
	return getx();
}				// ��ȡ��ǰ x ����
int	gety_cpp() {
	return gety();
}				// ��ȡ��ǰ y ����

void BeginBatchDraw_cpp() {
	return BeginBatchDraw();
}	// ��ʼ��������
void FlushBatchDraw_cpp() {
	return FlushBatchDraw();
}	// ִ��δ��ɵĻ�������
void FlushBatchDraw_cpp(int left, int top, int right, int bottom) {
	return FlushBatchDraw(left, top, right, bottom);
}	// ִ��ָ��������δ��ɵĻ�������
void EndBatchDraw_cpp() {
	return EndBatchDraw();
}	// �����������ƣ���ִ��δ��ɵĻ�������
void EndBatchDraw_cpp(int left, int top, int right, int bottom) {
	return EndBatchDraw(left, top, right, bottom);
}	// �����������ƣ���ִ��ָ��������δ��ɵĻ�������

HWND GetHWnd_cpp() {
	return GetHWnd();
}								// ��ȡ��ͼ���ھ��(HWND)
TCHAR* GetEasyXVer_cpp() {
	return GetEasyXVer();
}						// ��ȡ EasyX ��ǰ�汾

												// ��ȡ�û�����
bool InputBox_cpp(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt, LPCTSTR pTitle, LPCTSTR pDefault, int width, int height, bool bOnlyOK) {
	return InputBox(pString, nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
}


void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return setfont(nHeight, nWidth, lpszFace);
}
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	return setfont(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily)
{
	return setfont( nHeight,  nWidth, lpszFace,  nEscapement,  nOrientation,  nWeight,  bItalic, bUnderline,  bStrikeOut, fbCharSet, fbOutPrecision,  fbClipPrecision, fbQuality, fbPitchAndFamily);
}
void setfont_cpp(const LOGFONT *font) {
	return setfont(font);
}	// ���õ�ǰ������ʽ
void getfont_cpp(LOGFONT *font) {
	return getfont(font);
}			// ��ȡ��ǰ������ʽ

HWND initgraph_cpp_with_bgi(int* gdriver, int* gmode, char* path) {
	return initgraph(gdriver, gmode, path);
}

void bar_cpp(int left, int top, int right, int bottom) {
	return bar(left, top, right, bottom);
}		// ���ޱ߿�������
void bar3d_cpp(int left, int top, int right, int bottom, int depth, bool topflag) {
	return bar3d(left, top, right, bottom, depth, topflag);
}	// ���б߿���ά������

void drawpoly_cpp(int numpoints, const int *polypoints) {
	return drawpoly(numpoints, polypoints);
}	// �������
void fillpoly_cpp(int numpoints, const int *polypoints) {
	return fillpoly(numpoints, polypoints);
}	// �����Ķ����

int getmaxx_cpp()
{
	return getmaxx();
}					// ��ȡ���Ŀ��ֵ
int getmaxy_cpp() {
	return getmaxy();
}					// ��ȡ���ĸ߶�ֵ

COLORREF getcolor_cpp() {
	return getcolor();
}			// ��ȡ��ǰ��ͼǰ��ɫ
void setcolor_cpp(COLORREF color) {
	return setcolor(color);
}	// ���õ�ǰ��ͼǰ��ɫ

void setwritemode_cpp(int mode) {
	return setwritemode(mode);
}
// ����ǰ���Ķ�Ԫ��դ����ģʽ

