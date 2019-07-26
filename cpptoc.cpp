#define EXP 1
#include <comutil.h>
#include "C.h"
#include "CPP.h"
#include <GdiPlus.h>

#pragma comment(lib, "comsuppw.lib")
#pragma comment(lib, "GdiPlus.lib")
using namespace Gdiplus;
using namespace Gdiplus::DllExports;
EasyX_C_API HWND __stdcall initgraph(int width,int height){
	return initgraph_cpp(width, height);
}
EasyX_C_API HWND __stdcall initgraph_with_flag(int width, int height, int flag) {
	return initgraph_cpp(width, height, flag);
}
EasyX_C_API void __stdcall closegraph() {
	return closegraph_cpp();
}
EasyX_C_API void __stdcall cleardevice() {
	cleardevice_cpp();
}
EasyX_C_API void __stdcall clearcliprgn() {
	clearcliprgn_cpp();
}
EasyX_C_API void __stdcall getaspectratio(float *pxasp, float *pyasp) {
	getaspectratio_cpp(pxasp, pyasp);
}
EasyX_C_API void __stdcall graphdefaults() {
	graphdefaults_cpp();
}
EasyX_C_API void __stdcall setaspectratio(
	float xasp,
	float yasp
) {
	setaspectratio_cpp(xasp, yasp);
}
EasyX_C_API void __stdcall setcliprgn(HRGN hrgn) {
	setcliprgn_cpp(hrgn);
}

EasyX_C_API COLORREF __stdcall RGBtoGRAY(COLORREF rgb) {
	return RGBtoGRAY_cpp(rgb);
}
EasyX_C_API void __stdcall RGBtoHSL(COLORREF rgb, float *H, float *S, float *L) {
	RGBtoHSL_cpp(rgb, H, S, L);
}
EasyX_C_API void __stdcall RGBtoHSV(COLORREF rgb, float *H, float *S, float *V) {
	RGBtoHSV_cpp(rgb, H, S, V);
}
EasyX_C_API COLORREF __stdcall HSLtoRGB(float H, float S, float L) {
	return HSLtoRGB_cpp(H, S, L);
}
EasyX_C_API COLORREF __stdcall HSVtoRGB(float H, float S, float V) {
	return HSVtoRGB_cpp(H, S, V);
}

EasyX_C_API COLORREF __stdcall  getlinecolor() {
	return getlinecolor_cpp();
}			// ��ȡ��ǰ������ɫ
EasyX_C_API void __stdcall  setlinecolor(COLORREF color) {
	setlinecolor_cpp(color);
}	// ���õ�ǰ������ɫ
EasyX_C_API COLORREF __stdcall  gettextcolor() {
	return gettextcolor_cpp();
}			// ��ȡ��ǰ������ɫ
EasyX_C_API void  __stdcall settextcolor(COLORREF color) {
	settextcolor_cpp(color);
}	// ���õ�ǰ������ɫ
EasyX_C_API COLORREF __stdcall  getfillcolor() {
	return getfillcolor_cpp();
}			// ��ȡ��ǰ�����ɫ
EasyX_C_API void  __stdcall setfillcolor(COLORREF color) {
	setfillcolor_cpp(color);
}	// ���õ�ǰ�����ɫ
EasyX_C_API COLORREF  __stdcall getbkcolor() {
	return getbkcolor_cpp();
}				// ��ȡ��ǰ��ͼ����ɫ
EasyX_C_API void  __stdcall setbkcolor(COLORREF color) {
	setbkcolor_cpp(color);
}	// ���õ�ǰ��ͼ����ɫ
EasyX_C_API int   __stdcall getbkmode() {
	return getbkmode_cpp();
}					// ��ȡ�������ģʽ
EasyX_C_API void  __stdcall setbkmode(int mode) {
	setbkmode_cpp(mode);
}			// ���ñ������ģʽ

EasyX_C_API int  __stdcall  getrop2() {
	return getrop2_cpp();
}						// ��ȡǰ���Ķ�Ԫ��դ����ģʽ
EasyX_C_API void  __stdcall setrop2(int mode) {
	setrop2_cpp(mode);
}				// ����ǰ���Ķ�Ԫ��դ����ģʽ
EasyX_C_API int  __stdcall  getpolyfillmode() {
	return getpolyfillmode_cpp();
}				// ��ȡ��������ģʽ
EasyX_C_API void  __stdcall setpolyfillmode(int mode) {
	setpolyfillmode_cpp(mode);
}		// ���ö�������ģʽ


		// ��ͼ����

EasyX_C_API COLORREF  __stdcall getpixel(int x, int y) {
	return getpixel_cpp(x, y);
}				// ��ȡ�����ɫ
EasyX_C_API void  __stdcall putpixel(int x, int y, COLORREF color) {
	putpixel_cpp(x, y, color);
}	// ����

EasyX_C_API void  __stdcall moveto(int x, int y) {
	moveto_cpp(x, y);
}						// �ƶ���ǰ��(��������)
EasyX_C_API void  __stdcall moverel(int dx, int dy) {
	moverel_cpp(dx, dy);
}					// �ƶ���ǰ��(�������)

EasyX_C_API void  __stdcall line(int x1, int y1, int x2, int y2) {
	line_cpp(x1, y1, x2, y2);
}		// ����
EasyX_C_API void  __stdcall linerel(int dx, int dy) {
	linerel_cpp(dx, dy);
}					// ����(���������)
EasyX_C_API void  __stdcall lineto(int x, int y) {
	lineto_cpp(x, y);
}						// ����(����������)

EasyX_C_API void  __stdcall rectangle(int left, int top, int right, int bottom) {
	rectangle_cpp(left, top, right, bottom);
}	// ������
EasyX_C_API void  __stdcall fillrectangle(int left, int top, int right, int bottom) {
	fillrectangle_cpp(left, top, right, bottom);
}	// ��������(�б߿�)
EasyX_C_API void  __stdcall solidrectangle(int left, int top, int right, int bottom) {
	solidrectangle_cpp(left, top, right, bottom );
}	// ��������(�ޱ߿�)
EasyX_C_API void  __stdcall clearrectangle(int left, int top, int right, int bottom) {
	clearrectangle_cpp(left, top, right, bottom);
}	// ��վ�������

EasyX_C_API void  __stdcall circle(int x, int y, int radius) {
	circle_cpp(x, y, radius);
}		// ��Բ
EasyX_C_API void  __stdcall fillcircle(int x, int y, int radius) {
	fillcircle_cpp(x, y, radius);
}		// �����Բ(�б߿�)
EasyX_C_API void  __stdcall solidcircle(int x, int y, int radius) {
	solidcircle_cpp(x, y, radius);
}		// �����Բ(�ޱ߿�)
EasyX_C_API void  __stdcall clearcircle(int x, int y, int radius) {
	clearcircle_cpp(x, y, radius);
}		// ���Բ������

EasyX_C_API void  __stdcall ellipse(int left, int top, int right, int bottom) {
	ellipse_cpp(left, top, right, bottom);
}	// ����Բ
EasyX_C_API void  __stdcall fillellipse(int left, int top, int right, int bottom) {
	fillellipse_cpp(left, top, right, bottom);
}	// �������Բ(�б߿�)
EasyX_C_API void  __stdcall solidellipse(int left, int top, int right, int bottom) {
	solidellipse_cpp(left, top, right, bottom);
}	// �������Բ(�ޱ߿�)
EasyX_C_API void  __stdcall clearellipse(int left, int top, int right, int bottom) {
	clearellipse_cpp(left, top, right, bottom);
}	// �����Բ������

EasyX_C_API void  __stdcall roundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	roundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// ��Բ�Ǿ���
EasyX_C_API void  __stdcall fillroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	fillroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// �����Բ�Ǿ���(�б߿�)
EasyX_C_API void  __stdcall solidroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	solidroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// �����Բ�Ǿ���(�ޱ߿�)
EasyX_C_API void  __stdcall clearroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	clearroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// ���Բ�Ǿ�������

EasyX_C_API void  __stdcall arc(int left, int top, int right, int bottom, double stangle, double endangle) {
	arc_cpp(left, top, right, bottom, stangle, endangle);
}	// ����Բ��(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
EasyX_C_API void __stdcall  pie(int left, int top, int right, int bottom, double stangle, double endangle) {
	pie_cpp(left, top, right, bottom, stangle, endangle);
}	// ����Բ����(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
EasyX_C_API void  __stdcall fillpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie_cpp(left, top, right, bottom, stangle, endangle);
}	// �������Բ����(�б߿�)
EasyX_C_API void  __stdcall solidpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie_cpp(left, top, right, bottom, stangle, endangle);
}	// �������Բ����(�ޱ߿�)
EasyX_C_API void  __stdcall clearpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	clearpie_cpp(left, top, right, bottom, stangle, endangle);
}	// �����Բ��������

EasyX_C_API void  __stdcall polyline(const POINT *points, int num) {
	polyline_cpp(points, num);
}								// ��������������
EasyX_C_API void  __stdcall polygon(const POINT *points, int num) {
	polygon_cpp(points, num);
}								// �������
EasyX_C_API void  __stdcall fillpolygon(const POINT *points, int num) {
	fillpolygon_cpp(points, num);
}								// �����Ķ����(�б߿�)
EasyX_C_API void  __stdcall solidpolygon(const POINT *points, int num) {
solidpolygon_cpp(points, num);
}								// �����Ķ����(�ޱ߿�)
EasyX_C_API void  __stdcall clearpolygon(const POINT *points, int num) { 
	clearpolygon_cpp(points, num); 
}							// ��ն��������

EasyX_C_API void  __stdcall polybezier(const POINT *points, int num) {
	polygon_cpp(points, num);
}									// ������������
EasyX_C_API void  __stdcall floodfill(int x, int y, COLORREF color) {
	floodfill_cpp(x, y, color);
}	// �������

EasyX_C_API void  __stdcall floodfill_with_type(int x, int y, COLORREF color, int filltype) {
	floodfill_cpp(x, y, color,filltype);
}


EasyX_C_API void  __stdcall outtext(LPCTSTR str) {
	outtext_cpp(str);
}					// �ڵ�ǰλ������ַ���
EasyX_C_API void  __stdcall outtext_tchar(TCHAR c) {
	outtext_cpp(c);
}						// �ڵ�ǰλ������ַ�
EasyX_C_API void  __stdcall outtextxy(int x, int y, LPCTSTR str) {
	outtextxy_cpp(x, y, str);
}	// ��ָ��λ������ַ���
EasyX_C_API void  __stdcall outtextxy_tchar(int x, int y, TCHAR c) {
	outtextxy_cpp(x, y, c);
}		// ��ָ��λ������ַ�
EasyX_C_API int  __stdcall textwidth(LPCTSTR str) {
	return textwidth_cpp(str);
}					// ��ȡ�ַ���ռ�õ����ؿ�
EasyX_C_API int  __stdcall textwidth_tchar(TCHAR c) {
	return textwidth_cpp(c);
}						// ��ȡ�ַ�ռ�õ����ؿ�
EasyX_C_API int  __stdcall textheight(LPCTSTR str) {
	return textheight_cpp(str);
}				// ��ȡ�ַ���ռ�õ����ظ�
EasyX_C_API int  __stdcall textheight_tchar(TCHAR c) {
	return textheight_cpp(c);
}					// ��ȡ�ַ�ռ�õ����ظ�
EasyX_C_API int  __stdcall drawtext(LPCTSTR str, RECT* pRect, UINT uFormat) {
	return drawtext_cpp(str, pRect, uFormat);
}	// ��ָ����������ָ����ʽ����ַ���
EasyX_C_API int  __stdcall drawtext_tchar(TCHAR c, RECT* pRect, UINT uFormat) {
	return drawtext_cpp(c, pRect, uFormat);
}		// ��ָ����������ָ����ʽ����ַ�
EasyX_C_API void __stdcall	getlinestyle(LINESTYLE* pstyle) {
	getlinestyle_cpp(pstyle);
}						// ��ȡ��ǰ������ʽ
EasyX_C_API void  __stdcall setlinestyle(const LINESTYLE* pstyle) {
	setlinestyle_cpp(pstyle);
}					// ���õ�ǰ������ʽ
EasyX_C_API void  __stdcall setlinestyle_with_style(int style) {
	setlinestyle_cpp(style,1);
}	// ���õ�ǰ������ʽ
EasyX_C_API void  __stdcall setlinestyle_with_style_thickness(int style, int thickness) {
	setlinestyle_cpp(style, thickness);
}
EasyX_C_API void  __stdcall setlinestyle_with_thickness_style_puserstyle_puserstylecount(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount) {
	setlinestyle_cpp(style, thickness, puserstyle, userstylecount);
}	// ���õ�ǰ������ʽ
EasyX_C_API void  __stdcall getfillstyle(FILLSTYLE* pstyle) {
	getfillstyle_cpp(pstyle);
}						// ��ȡ��ǰ�����ʽ
EasyX_C_API void  __stdcall setfillstyle(const FILLSTYLE* pstyle) {
	setfillstyle_cpp(pstyle);
}					// ���õ�ǰ�����ʽ
EasyX_C_API void  __stdcall setfillstyle_with_style(int style) {
	setfillstyle_cpp(style,0L);
}		// ���õ�ǰ�����ʽ
EasyX_C_API void  __stdcall setfillstyle_with_style_hatch(int style, long hatch) {
	setfillstyle_cpp(style, hatch);
	}
EasyX_C_API void  __stdcall setfillstyle_with_style_pattern(int style,long hatch ,IMAGE* ppattern) {
	setfillstyle_cpp(style, hatch, ppattern);
	}
	
EasyX_C_API void  __stdcall setfillstyle_with_pattern8x8(BYTE* ppattern8x8) {
	setfillstyle_cpp(ppattern8x8);
}						// ���õ�ǰ�����ʽ

EasyX_C_API bool __stdcall MouseHit() {
	return MouseHit_cpp();
}			// ����Ƿ���������Ϣ
EasyX_C_API MOUSEMSG __stdcall  GetMouseMsg() {
	MOUSEMSG m;
	GetMouseMsg_cpp();
	m.uMsg = GetMouseMsg_cpp_getuMsg();
	m.mkCtrl = Get_MouseMsg_cpp_getmkCtrl();
	m.mkShift = Get_MouseMsg_cpp_getmkShift();
	m.mkLButton = Get_MouseMsg_cpp_getmkLButton();
	m.mkMButton = Get_MouseMsg_cpp_getmkMButton();
	m.mkRButton = Get_MouseMsg_cpp_getmkRButton();
	m.x = Get_MouseMsg_cpp_getx();
	m.y = Get_MouseMsg_cpp_gety();
	return m;
}		// ��ȡһ�������Ϣ�����û�У��͵ȴ�
EasyX_C_API void __stdcall FlushMouseMsgBuffer() {
	FlushMouseMsgBuffer_cpp();
}	// ��������Ϣ������
EasyX_C_API LINESTYLE __stdcall CreateLS() {
	return createLineStyle();
}
EasyX_C_API LINESTYLE __stdcall CreateLSFromLS(LINESTYLE s) {
	return createLineStyle_from_one(s);
}
EasyX_C_API void __stdcall SetLS_Style(LINESTYLE s, DWORD style) {
	setLineStyle_style(s, style);
}
EasyX_C_API void __stdcall SetLS_Thickness(LINESTYLE s, DWORD thickness) {
	setLineStyle_thickness(s, thickness);
}
EasyX_C_API void __stdcall SetLS_Puserstyle(LINESTYLE s, DWORD *puserstyle) {
	setLineStyle_puserstyle(s, puserstyle);
}
EasyX_C_API void __stdcall SetLS_Userstylecount(LINESTYLE s, DWORD userstylecount) {
	setLineStyle_userstylecount(s, userstylecount);
}
EasyX_C_API FILLSTYLE __stdcall CreateFS() {
	return createFillStyle();
}
EasyX_C_API FILLSTYLE __stdcall CreateFSFromFS(FILLSTYLE s) {
	return createFillStyle_from_one(s);
}
EasyX_C_API void __stdcall SetFS_Style(FILLSTYLE s, int style) {
	setFillStyle_style(s, style);
}
EasyX_C_API void __stdcall SetFS_hatch(FILLSTYLE s, long hatch) {
	setFillStyle_hatch(s, hatch);
}
EasyX_C_API void __stdcall SetFS_ppattern(FILLSTYLE s, IMAGE *ppattern) {
	setFillStyle_ppattern(s,ppattern);
}
EasyX_C_API IMAGE __stdcall  CreateI() {
	return CreateIMAGE(0,0);
}
EasyX_C_API IMAGE __stdcall  CreateIFromI(IMAGE i) {
	return CreateIMAGE_from_one(i);
}
EasyX_C_API IMAGE __stdcall  CreateIFromWH(int _w,int _h) {
	return CreateIMAGE(_w, _h);
}
EasyX_C_API int __stdcall  GetIW(IMAGE i) {
	return GetIMAGE_width(i);
}
EasyX_C_API int __stdcall  GetIH(IMAGE i) {
	return GetIMAGE_height(i);
}
EasyX_C_API void __stdcall  ResizeI(IMAGE i, int _weight, int _height) {
	ResizeIMAGE(i, _weight, _height);
}


EasyX_C_API void  __stdcall settextstyle1(int nHeight, int nWidth, LPCTSTR lpszFace) {
	settextstyle_cpp(nHeight, nWidth, lpszFace);
}
EasyX_C_API void  __stdcall settextstyle2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	settextstyle_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
EasyX_C_API void  __stdcall settextstyle3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	settextstyle_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);

}
EasyX_C_API void  __stdcall settextstyle4(const LOGFONT *font) {
	settextstyle_cpp(font);
}	// ���õ�ǰ������ʽ
EasyX_C_API void __stdcall  gettextstyle(LOGFONT *font) {
	gettextstyle_cpp(font);
}		// ��ȡ��ǰ������ʽ

//EasyX_C_API void  __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace)
//{
//	settextstyle1(nHeight, nWidth, lpszFace);
//}


													//δд
EasyX_C_API void  __stdcall loadimage1(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight) {
	loadimage_cpp(pDstImg, pImgFile, nWidth, nHeight);
}				// ��ͼƬ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
EasyX_C_API void  __stdcall loadimage2(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth, int nHeight, bool bResize){
	loadimage_cpp((pDstImg),pResType, pResName, nWidth, nHeight, bResize);
}	// ����Դ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
EasyX_C_API void  __stdcall loadimage3(IMAGE *pDstImg, LPCTSTR pImgFile) {
	loadimage_cpp(pDstImg, pImgFile);
}
EasyX_C_API void __stdcall loadimage4(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight, bool bResize) {
	loadimage_cpp(pDstImg, pImgFile,nWidth,nHeight,bResize);
}
EasyX_C_API void __stdcall saveimage(LPCTSTR pImgFile, IMAGE* pImg) {
	saveimage_cpp(pImgFile, pImg);
}																		// ����ͼ��(bmp/gif/jpg/png/tif)
EasyX_C_API void __stdcall getimage(IMAGE *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight) {
	getimage_cpp(pDstImg, srcX, srcY, srcWidth, srcHeight);
}										// �ӵ�ǰ��ͼ�豸��ȡͼ��
EasyX_C_API void __stdcall putimage1(int dstX, int dstY, const IMAGE *pSrcImg) {
	putimage_cpp(dstX, dstY, pSrcImg);
}												// ����ͼ����Ļ

EasyX_C_API void __stdcall loadimage(IMAGE * pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight)
{
	loadimage1(pDstImg, pImgFile, nWidth, nHeight);
}

EasyX_C_API void __stdcall putimage2(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop) {
	putimage_cpp(dstX, dstY, pSrcImg,dwRop);
}												// ����ͼ����Ļ

EasyX_C_API void __stdcall  putimage3(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop) {
	putimage_cpp(dstX, dstY, dstWidth, dstHeight,pSrcImg, srcX, srcY, dwRop);
}		// ����ͼ����Ļ(ָ�����)
EasyX_C_API void __stdcall rotateimage(IMAGE *dstimg, IMAGE *srcimg, double radian, COLORREF bkcolor, bool autosize, bool highquality) {
	rotateimage_cpp((*(IMAGE**)dstimg), (*(IMAGE**)srcimg), radian, bkcolor, autosize, highquality);
}// ��תͼ��
EasyX_C_API void __stdcall Resize(IMAGE* pImg, int width, int height) {
	Resize_cpp(pImg, width, height);
}	// ������ͼ�豸�Ĵ�С
EasyX_C_API DWORD* __stdcall  GetImageBuffer(IMAGE* pImg) {
	return GetImageBuffer_cpp(pImg);
}			// ��ȡ��ͼ�豸���Դ�ָ��//Ĭ��NULL
EasyX_C_API IMAGE* __stdcall  GetWorkingImage() {
	return GetWorkingImage_cpp();
}							// ��ȡ��ǰ��ͼ�豸
EasyX_C_API void  __stdcall SetWorkingImage(IMAGE* pImg) {
	return SetWorkingImage_cpp(pImg);
}			// ���õ�ǰ��ͼ�豸//Ĭ��NULL
EasyX_C_API HDC  __stdcall GetImageHDC(IMAGE* pImg) {
	return GetImageHDC_cpp(pImg);
}				// ��ȡ��ͼ�豸���(HDC)//Ĭ��NULL

														//δд
														// ��������

EasyX_C_API int	 __stdcall getwidth() {
	return getwidth_cpp();
}			// ��ȡ��ͼ�����
EasyX_C_API int	 __stdcall getheight() {
	return getheight_cpp();
}		// ��ȡ��ͼ���߶�
EasyX_C_API int	 __stdcall getx() {
	return getx_cpp();
}				// ��ȡ��ǰ x ����
EasyX_C_API int	 __stdcall gety() {
	return gety_cpp();
}				// ��ȡ��ǰ y ����

EasyX_C_API void  __stdcall BeginBatchDraw() {
	BeginBatchDraw_cpp();
}	// ��ʼ��������
EasyX_C_API void  __stdcall FlushBatchDraw1() {
	FlushBatchDraw_cpp();
}	// ִ��δ��ɵĻ�������
EasyX_C_API void  __stdcall FlushBatchDraw2(int left, int top, int right, int bottom) {
	FlushBatchDraw_cpp(left, top, right, bottom);
}	// ִ��ָ��������δ��ɵĻ�������
EasyX_C_API void  __stdcall EndBatchDraw1() {
	EndBatchDraw_cpp();
}	// �����������ƣ���ִ��δ��ɵĻ�������
EasyX_C_API void  __stdcall EndBatchDraw2(int left, int top, int right, int bottom) {
	EndBatchDraw_cpp(left, top, right, bottom);
}	// �����������ƣ���ִ��ָ��������δ��ɵĻ�������

EasyX_C_API HWND  __stdcall GetHWnd() {
	return GetHWnd_cpp();
}								// ��ȡ��ͼ���ھ��(HWND)
EasyX_C_API TCHAR*  __stdcall GetEasyXVer() {
	return GetEasyXVer_cpp();
}						// ��ȡ EasyX ��ǰ�汾

														// ��ȡ�û�����
EasyX_C_API bool  __stdcall InputBox1(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt, LPCTSTR pTitle, LPCTSTR pDefault, int width, int height, bool bOnlyOK) {
	return InputBox_cpp(pString,nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
}
EasyX_C_API bool  __stdcall InputBox2(LPTSTR pString, int nMaxCount) {
	return InputBox_cpp(pString,nMaxCount);
}



EasyX_C_API HWND  __stdcall	initgraph_bgi(int* gdriver, int* gmode, char* path) {
	return initgraph_cpp_with_bgi(gdriver, gmode, path);
}

EasyX_C_API void  __stdcall	bar(int left, int top, int right, int bottom) {
	bar_cpp(left, top, right, bottom);
}		// ���ޱ߿�������
EasyX_C_API void  __stdcall	bar3d(int left, int top, int right, int bottom, int depth, bool topflag) {
	bar3d_cpp(left, top, right, bottom, depth, topflag);
}	// ���б߿���ά������

EasyX_C_API void  __stdcall	drawpoly(int numpoints, const int *polypoints) {
	drawpoly_cpp(numpoints, polypoints);
}	// �������
EasyX_C_API void  __stdcall	fillpoly(int numpoints, const int *polypoints) {
	fillpoly_cpp(numpoints, polypoints);
}	// �����Ķ����

EasyX_C_API int  __stdcall	getmaxx() {
	return getmaxx_cpp();
}					// ��ȡ���Ŀ��ֵ
EasyX_C_API int  __stdcall	getmaxy(){
	return getmaxy_cpp();
}					// ��ȡ���ĸ߶�ֵ

EasyX_C_API COLORREF  __stdcall	getcolor() {
	return getcolor_cpp();

}			// ��ȡ��ǰ��ͼǰ��ɫ
EasyX_C_API void  __stdcall	setcolor(COLORREF color) {
	return setcolor_cpp(color);
}	// ���õ�ǰ��ͼǰ��ɫ

EasyX_C_API void  __stdcall	setwritemode(int mode) {
	setwritemode_cpp(mode);
}	// ����ǰ���Ķ�Ԫ��դ����ģʽ


EasyX_C_API void  __stdcall	setfont1(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return setfont_cpp(nHeight, nWidth, lpszFace);
}
EasyX_C_API void  __stdcall	setfont2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	setfont_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
EasyX_C_API void  __stdcall	setfont3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	return setfont_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
}
EasyX_C_API void  __stdcall	setfont4(const LOGFONT *font) {
	setfont_cpp(font);
}	// ���õ�ǰ������ʽ
EasyX_C_API void  __stdcall	getfont5(LOGFONT *font) {
	setfont_cpp(font);
}

EasyX_C_API void __stdcall setfont(int nHeight, int nWidth, LPCTSTR lpszFace)
{
	return setfont1(nHeight, nWidth, lpszFace);
}

bool inited = 0;
ULONG_PTR gdipid;
EasyX_C_API void __stdcall ainit() {
	GdiplusStartupInput gsi;
	GdiplusStartupOutput goi;
	GdiplusStartup(&gdipid, &gsi, &goi);
	inited = 1;
}
EasyX_C_API void __stdcall auninit() {
	inited = 0;
	GdiplusShutdown(gdipid);
}

EasyX_C_API void __stdcall loadimagea1(IMAGE *pSrcimg, LPCTSTR pImgFile,bool bResize, int rWidth, int rHeight, bool bMove, int mX, int mY) {
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid,&gsi,&goi);
		inited = 1;
	}
	wchar_t * s = (wchar_t*)(_bstr_t)pImgFile;
	Image *i = new Image((WCHAR*)s);
	Graphics g(GetImageHDC_cpp(pSrcimg));
	if (!bResize && !bMove) {
		g.DrawImage(i, 0, 0, i->GetWidth(), i->GetHeight());
	}
	else if(bResize &&!bMove){
		g.DrawImage(i, 0, 0, rWidth, rHeight);
	}
	else if (bResize && bMove) {
		g.DrawImage(i, mX, mY, rWidth, rHeight);
	}
	else if(!bResize && bMove){
		g.DrawImage(i, mX, mY, i->GetWidth(), i->GetHeight());
	}
	g.~Graphics();
	i->~Image();
}

EasyX_C_API void __stdcall loadimagea2(IMAGE *pSrcImg, LPCTSTR pResType, LPCTSTR pResName, bool bResize, int rWidth, int rHeight, bool bMove, int mX, int mY) {
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	HINSTANCE hInst = GetModuleHandle(NULL);
	HRSRC hRsrc = ::FindResource(hInst,pResName,pResType); // type

	// load resource into memory
	DWORD len = SizeofResource(hInst, hRsrc);
	BYTE* lpRsrc = (BYTE*)LoadResource(hInst, hRsrc);


	// Allocate global memory on which to create stream
	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem, lpRsrc, len);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem, FALSE, &pstm);

	// load from stream���ǹؼ�һ�䣬ͨ��FromStream�����Ը�Image*��Ȼ����Graphic��DrawImage�ط����þ����ˣ�
	Image *i=new Image(pstm);
	Graphics g(GetImageHDC_cpp(pSrcImg));
	if (!bResize && !bMove) {
		g.DrawImage(i, 0, 0, i->GetWidth(), i->GetHeight());
	}
	else if (bResize && !bMove) {
		g.DrawImage(i, 0, 0, rWidth, rHeight);
	}
	else if (bResize && bMove) {
		g.DrawImage(i, mX, mY, rWidth, rHeight);
	}
	else if (!bResize && bMove) {
		g.DrawImage(i, mX, mY, i->GetWidth(), i->GetHeight());
	}
	// free/release stuff
	GlobalUnlock(m_hMem);
	pstm->Release();
	FreeResource(lpRsrc);
	g.~Graphics();
	i->~Image();
}
EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION1(LPCTSTR pImgFile) {
	struct  AIMAGE_INFORMATION info;
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	wchar_t * s = (wchar_t*)(_bstr_t)pImgFile;
	Image *i = new Image((WCHAR*)s);
	if (i == NULL) {
		return {0,0};
	}
	info.m_Height = i->GetHeight();
	info.m_Width = i->GetWidth();
	i->~Image();
	return info;
}
EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName) {
	struct  AIMAGE_INFORMATION info;
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	HINSTANCE hInst = GetModuleHandle(NULL);
	HRSRC hRsrc = ::FindResource(hInst, pResName, pResType); // type

															 // load resource into memory
	DWORD len = SizeofResource(hInst, hRsrc);
	BYTE* lpRsrc = (BYTE*)LoadResource(hInst, hRsrc);


	// Allocate global memory on which to create stream
	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem, lpRsrc, len);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem, FALSE, &pstm);

	// load from stream���ǹؼ�һ�䣬ͨ��FromStream�����Ը�Image*��Ȼ����Graphic��DrawImage�ط����þ����ˣ�
	Image *i = new Image(pstm);
	if (i == NULL) {
		return{ 0,0 };
	}
	info.m_Height = i->GetHeight();
	info.m_Width = i->GetWidth();
	// free/release stuff
	GlobalUnlock(m_hMem);
	pstm->Release();
	FreeResource(lpRsrc);
	i->~Image();
	return info;
}