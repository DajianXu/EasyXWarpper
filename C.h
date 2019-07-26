#ifndef C_H
#define C_H
#include <Windows.h>
#pragma warning(disable:4005)
#ifdef EXP

	
		#define EasyX_C_API extern "C" __declspec(dllexport)
	#else
        #ifdef __cplusplus
            #define EasyX_C_API extern "C" __declspec(dllimport)
		#else
            #define EasyX_C_API  __declspec(dllimport)
		#endif // __cplusplus
#endif // !EXP
// ���� initgraph ��ͼģʽ�ĺ궨�壨��ʵ�����壩
#define DETECT	0
#define VGA		0
#define	VGALO	0
#define VGAMED	0
#define VGAHI	0
#define CGA		0
#define	CGAC0	0
#define	CGAC1	0
#define CGAC2	0
#define CGAC3	0
#define CGAHI	0
#define EGA		0
#define EGALO	0
#define	EGAHI	0
// ��ɫ
// ��ͼ���ڳ�ʼ������
#define SHOWCONSOLE		1		// ����ͼ�δ���ʱ����������̨����ʾ
#define NOCLOSE			2		// û�йرչ���
#define NOMINIMIZE		4		// û����С������
#define	BLACK			0
#define	BLUE			0xAA0000
#define	GREEN			0x00AA00
#define	CYAN			0xAAAA00
#define	RED				0x0000AA
#define	MAGENTA			0xAA00AA
#define	BROWN			0x0055AA
#define	LIGHTGRAY		0xAAAAAA
#define	DARKGRAY		0x555555
#define	LIGHTBLUE		0xFF5555
#define	LIGHTGREEN		0x55FF55
#define	LIGHTCYAN		0xFFFF55
#define	LIGHTRED		0x5555FF
#define	LIGHTMAGENTA	0xFF55FF
#define	YELLOW			0x55FFFF
#define	WHITE			0xFFFFFF
// ���������ʽ����ʹ�ã��µ������ʽ��μ������ļ�
#define	NULL_FILL			BS_NULL
#define	EMPTY_FILL			BS_NULL
#define	SOLID_FILL			BS_SOLID
// ��ͨһ��
#define	BDIAGONAL_FILL		BS_HATCHED, HS_BDIAGONAL					// /// ��� (��Ӧ BGI �� LTSLASH_FILL)
#define CROSS_FILL			BS_HATCHED, HS_CROSS						// +++ ���
#define DIAGCROSS_FILL		BS_HATCHED, HS_DIAGCROSS					// xxx ��� (heavy cross hatch fill) (��Ӧ BGI �� XHTACH_FILL)
#define DOT_FILL			(BYTE*)"\x80\x00\x08\x00\x80\x00\x08\x00"	// xxx ��� (��Ӧ BGI �� WIDE_DOT_FILL)	
#define FDIAGONAL_FILL		BS_HATCHED, HS_FDIAGONAL					// \\\ ���
#define HORIZONTAL_FILL		BS_HATCHED, HS_HORIZONTAL					// === ���
#define VERTICAL_FILL		BS_HATCHED, HS_VERTICAL						// ||| ���
// �ܼ�һ��
#define BDIAGONAL2_FILL		(BYTE*)"\x44\x88\x11\x22\x44\x88\x11\x22"
#define CROSS2_FILL			(BYTE*)"\xff\x11\x11\x11\xff\x11\x11\x11"	// (��Ӧ BGI �� fill HATCH_FILL)
#define DIAGCROSS2_FILL		(BYTE*)"\x55\x88\x55\x22\x55\x88\x55\x22"
#define DOT2_FILL			(BYTE*)"\x88\x00\x22\x00\x88\x00\x22\x00"	// (��Ӧ BGI �� CLOSE_DOT_FILL)
#define FDIAGONAL2_FILL		(BYTE*)"\x22\x11\x88\x44\x22\x11\x88\x44"
#define HORIZONTAL2_FILL	(BYTE*)"\x00\x00\xff\x00\x00\x00\xff\x00"
#define VERTICAL2_FILL		(BYTE*)"\x11\x11\x11\x11\x11\x11\x11\x11"
// ����һ��
#define BDIAGONAL3_FILL		(BYTE*)"\xe0\xc1\x83\x07\x0e\x1c\x38\x70"	// (��Ӧ BGI �� SLASH_FILL)
#define CROSS3_FILL			(BYTE*)"\x30\x30\x30\x30\x30\x30\xff\xff"
#define DIAGCROSS3_FILL		(BYTE*)"\xc7\x83\xc7\xee\x7c\x38\x7c\xee"
#define DOT3_FILL			(BYTE*)"\xc0\xc0\x0c\x0c\xc0\xc0\x0c\x0c"
#define FDIAGONAL3_FILL		(BYTE*)"\x07\x83\xc1\xe0\x70\x38\x1c\x0e"
#define HORIZONTAL3_FILL	(BYTE*)"\xff\xff\x00\x00\xff\xff\x00\x00"	// (��Ӧ BGI �� LINE_FILL)	
#define VERTICAL3_FILL		(BYTE*)"\x33\x33\x33\x33\x33\x33\x33\x33"
// ����
#define INTERLEAVE_FILL		(BYTE*)"\xcc\x33\xcc\x33\xcc\x33\xcc\x33"	// (��Ӧ BGI �� INTERLEAVE_FILL)


#ifndef BGR
#define BGR(color)	( (((color) & 0xFF) << 16) | ((color) & 0xFF00FF00) | (((color) & 0xFF0000) >> 16) )
#endif
#ifndef GetRValue
#define GetRValue(rgb)      (LOBYTE(rgb))
#define GetGValue(rgb)      (LOBYTE(((WORD)(rgb)) >> 8))
#define GetBValue(rgb)      (LOBYTE((rgb)>>16))
#endif
#define bool int
typedef void* IMAGE;
typedef void* FILLSTYLE;
typedef void* LINESTYLE;
#ifndef _T
	#ifndef UNICODE
		#define _T(a) a
		#define TEXT(a) a
	#else
		#define _T(a) L##a
		#define TEXT(a) L##a
	#endif // !Unicode
#endif
	EasyX_C_API HWND  __stdcall	initgraph_bgi(int* gdriver, int* gmode, char* path);
	EasyX_C_API HWND __stdcall initgraph_with_flag(int width, int height, int flag);
#if defined(__cplusplus) && !defined(EXP)
	HWND __stdcall initgraph(int width, int height, int flag=NULL) {
		return initgraph_with_flag(width, height, flag);
	}
	HWND __stdcall initgraph(int *gdriver, int *gmode, char *path) {
		return initgraph_bgi(gdriver, gmode, path);
	}
#else
	EasyX_C_API HWND __stdcall initgraph(int width, int height);
#endif // 
	EasyX_C_API void __stdcall closegraph();
	EasyX_C_API void __stdcall cleardevice();
	EasyX_C_API void __stdcall clearcliprgn();
	EasyX_C_API void __stdcall getaspectratio(float *pxasp,float *pyasp);
	EasyX_C_API void __stdcall graphdefaults();
	EasyX_C_API void __stdcall setaspectratio(
		float xasp,
		float yasp
	);
	EasyX_C_API void __stdcall setcliprgn(HRGN hrgn);
	// ��ɫģ��ת������
	EasyX_C_API COLORREF __stdcall RGBtoGRAY(COLORREF rgb);
	EasyX_C_API void __stdcall RGBtoHSL(COLORREF rgb, float *H, float *S, float *L);
	EasyX_C_API void __stdcall RGBtoHSV(COLORREF rgb, float *H, float *S, float *V);
	EasyX_C_API COLORREF __stdcall HSLtoRGB(float H, float S, float L);
	EasyX_C_API COLORREF __stdcall HSVtoRGB(float H, float S, float V);


	EasyX_C_API COLORREF __stdcall  getlinecolor();			// ��ȡ��ǰ������ɫ
	EasyX_C_API void __stdcall  setlinecolor(COLORREF color);	// ���õ�ǰ������ɫ
	EasyX_C_API COLORREF __stdcall  gettextcolor();			// ��ȡ��ǰ������ɫ
	EasyX_C_API void  __stdcall settextcolor(COLORREF color);	// ���õ�ǰ������ɫ
	EasyX_C_API COLORREF __stdcall  getfillcolor();			// ��ȡ��ǰ�����ɫ
	EasyX_C_API void  __stdcall setfillcolor(COLORREF color);	// ���õ�ǰ�����ɫ
	EasyX_C_API COLORREF  __stdcall getbkcolor();				// ��ȡ��ǰ��ͼ����ɫ
	EasyX_C_API void  __stdcall setbkcolor(COLORREF color);	// ���õ�ǰ��ͼ����ɫ
	EasyX_C_API int   __stdcall getbkmode();					// ��ȡ�������ģʽ
	EasyX_C_API void  __stdcall setbkmode(int mode);			// ���ñ������ģʽ
	EasyX_C_API int  __stdcall  getrop2();						// ��ȡǰ���Ķ�Ԫ��դ����ģʽ
	EasyX_C_API void  __stdcall setrop2(int mode);				// ����ǰ���Ķ�Ԫ��դ����ģʽ
	EasyX_C_API int  __stdcall  getpolyfillmode();				// ��ȡ��������ģʽ
	EasyX_C_API void  __stdcall setpolyfillmode(int mode);		// ���ö�������ģʽ




	// ��ͼ����

	EasyX_C_API COLORREF  __stdcall getpixel(int x, int y);				// ��ȡ�����ɫ
	EasyX_C_API void  __stdcall putpixel(int x, int y, COLORREF color);	// ����

	EasyX_C_API void  __stdcall moveto(int x, int y);						// �ƶ���ǰ��(��������)
	EasyX_C_API void  __stdcall moverel(int dx, int dy);					// �ƶ���ǰ��(�������)

	EasyX_C_API void  __stdcall line(int x1, int y1, int x2, int y2);		// ����
	EasyX_C_API void  __stdcall linerel(int dx, int dy);					// ����(���������)
	EasyX_C_API void  __stdcall lineto(int x, int y);						// ����(����������)

	EasyX_C_API void  __stdcall rectangle(int left, int top, int right, int bottom);	// ������
	EasyX_C_API void  __stdcall fillrectangle(int left, int top, int right, int bottom);	// ��������(�б߿�)
	EasyX_C_API void  __stdcall solidrectangle(int left, int top, int right, int bottom);	// ��������(�ޱ߿�)
	EasyX_C_API void  __stdcall clearrectangle(int left, int top, int right, int bottom);	// ��վ�������

	EasyX_C_API void  __stdcall circle(int x, int y, int radius);		// ��Բ
	EasyX_C_API void  __stdcall fillcircle(int x, int y, int radius);		// �����Բ(�б߿�)
	EasyX_C_API void  __stdcall solidcircle(int x, int y, int radius);		// �����Բ(�ޱ߿�)
	EasyX_C_API void  __stdcall clearcircle(int x, int y, int radius);		// ���Բ������

	EasyX_C_API void  __stdcall ellipse(int left, int top, int right, int bottom);	// ����Բ
	EasyX_C_API void  __stdcall fillellipse(int left, int top, int right, int bottom);	// �������Բ(�б߿�)
	EasyX_C_API void  __stdcall solidellipse(int left, int top, int right, int bottom);	// �������Բ(�ޱ߿�)
	EasyX_C_API void  __stdcall clearellipse(int left, int top, int right, int bottom);	// �����Բ������

	EasyX_C_API void  __stdcall roundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// ��Բ�Ǿ���
	EasyX_C_API void  __stdcall fillroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// �����Բ�Ǿ���(�б߿�)
	EasyX_C_API void  __stdcall solidroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// �����Բ�Ǿ���(�ޱ߿�)
	EasyX_C_API void  __stdcall clearroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// ���Բ�Ǿ�������

	EasyX_C_API void  __stdcall arc(int left, int top, int right, int bottom, double stangle, double endangle);	// ����Բ��(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
	EasyX_C_API void __stdcall  pie(int left, int top, int right, int bottom, double stangle, double endangle);	// ����Բ����(��ʼ�ǶȺ���ֹ�Ƕ�Ϊ������)
	EasyX_C_API void  __stdcall fillpie(int left, int top, int right, int bottom, double stangle, double endangle);	// �������Բ����(�б߿�)
	EasyX_C_API void  __stdcall solidpie(int left, int top, int right, int bottom, double stangle, double endangle);	// �������Բ����(�ޱ߿�)
	EasyX_C_API void  __stdcall clearpie(int left, int top, int right, int bottom, double stangle, double endangle);	// �����Բ��������

	EasyX_C_API void  __stdcall polyline(const POINT *points, int num);								// ��������������
	EasyX_C_API void  __stdcall polygon(const POINT *points, int num);								// �������
	EasyX_C_API void  __stdcall fillpolygon(const POINT *points, int num);								// �����Ķ����(�б߿�)
	EasyX_C_API void  __stdcall solidpolygon(const POINT *points, int num);								// �����Ķ����(�ޱ߿�)
	EasyX_C_API void  __stdcall clearpolygon(const POINT *points, int num);								// ��ն��������

	EasyX_C_API void  __stdcall polybezier(const POINT *points, int num);									// ������������
	EasyX_C_API void  __stdcall floodfill(int x, int y, COLORREF color);	// �������
	EasyX_C_API void  __stdcall floodfill_with_type(int x, int y, COLORREF color, int filltype);



	// ������غ���

				// �ڵ�ǰλ������ַ���
	EasyX_C_API void  __stdcall outtext_tchar(TCHAR c);						// �ڵ�ǰλ������ַ�
	EasyX_C_API void  __stdcall outtextxy(int x, int y, LPCTSTR str);	// ��ָ��λ������ַ���
	EasyX_C_API void  __stdcall outtextxy_tchar(int x, int y, TCHAR c);		// ��ָ��λ������ַ�
	EasyX_C_API int  __stdcall textwidth(LPCTSTR str);					// ��ȡ�ַ���ռ�õ����ؿ�
	EasyX_C_API int  __stdcall textwidth_tchar(TCHAR c);						// ��ȡ�ַ�ռ�õ����ؿ�
	EasyX_C_API int  __stdcall textheight(LPCTSTR str);				// ��ȡ�ַ���ռ�õ����ظ�
	EasyX_C_API int  __stdcall textheight_tchar(TCHAR c);					// ��ȡ�ַ�ռ�õ����ظ�
	EasyX_C_API int  __stdcall drawtext(LPCTSTR str, RECT* pRect, UINT uFormat);	// ��ָ����������ָ����ʽ����ַ���
	EasyX_C_API int  __stdcall drawtext_tchar(TCHAR c, RECT* pRect, UINT uFormat);		// ��ָ����������ָ����ʽ����ַ�
#if defined(__cplusplus) && !defined(EXP)
	void  __stdcall outtext(TCHAR c) {
		outtext_tchar(c);
	}
	void  __stdcall outtextxy(int x,int y,TCHAR c) {
		outtextxy_tchar(x,y,c);
	}
	int  __stdcall textwidth(TCHAR c) {
		return textwidth_tchar(c);
	}
	int  __stdcall textHeight(TCHAR c) {
		return textheight_tchar(c);
	}
	int  __stdcall drawtext(TCHAR c, RECT* pRect, UINT uFormat) {
		return drawtext_tchar(c, pRect, uFormat);
	}
#endif

	EasyX_C_API void __stdcall	getlinestyle(LINESTYLE* pstyle);						// ��ȡ��ǰ������ʽ
	EasyX_C_API void  __stdcall setlinestyle(const LINESTYLE* pstyle);					// ���õ�ǰ������ʽ
	EasyX_C_API void  __stdcall setlinestyle_with_style(int style);	// ���õ�ǰ������ʽ
	EasyX_C_API void  __stdcall setlinestyle_with_style_thickness(int style, int thickness);
	EasyX_C_API void  __stdcall setlinestyle_with_thickness_style_puserstyle_puserstylecount(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount);	// ���õ�ǰ������ʽ
	EasyX_C_API void  __stdcall getfillstyle(FILLSTYLE* pstyle);						// ��ȡ��ǰ�����ʽ
	EasyX_C_API void  __stdcall setfillstyle(const FILLSTYLE* pstyle);					// ���õ�ǰ�����ʽ
	EasyX_C_API void  __stdcall setfillstyle_with_style(int style);		// ���õ�ǰ�����ʽ
	EasyX_C_API void  __stdcall setfillstyle_with_style_hatch(int style,  long hatch);
	EasyX_C_API void  __stdcall setfillstyle_with_style_pattern(int style,  long hatch,IMAGE* ppattern);
	
	EasyX_C_API void  __stdcall setfillstyle_with_pattern8x8(BYTE* ppattern8x8);						// ���õ�ǰ�����ʽ
#if defined(__cplusplus) && !defined(EXP)
	void setlinestyle(int style, int thickness = 1, const DWORD *puserstyle = NULL, DWORD userstylecount = 0) {
		setlinestyle_with_thickness_style_puserstyle_puserstylecount(style, thickness, puserstyle, userstylecount);
	}	// ���õ�ǰ������ʽ
	void  __stdcall setlinestyle(int style) {
		setlinestyle_with_style(style);
	}
	void  __stdcall setfillstyle(int style, long hatch = NULL, IMAGE* ppattern = NULL) {
		setfillstyle_with_style_pattern(style, hatch, ppattern);
	}
	void  __stdcall setfillstyle(BYTE* ppattern8x8) {
		setfillstyle_with_pattern8x8(ppattern8x8);
	}
#endif
	EasyX_C_API bool __stdcall MouseHit();			// ����Ƿ���������Ϣ
#ifndef __cplusplus
 typedef struct{
		UINT uMsg;				// ��ǰ�����Ϣ
		bool mkCtrl;			// Ctrl ���Ƿ���
		bool mkShift;			// Shift ���Ƿ���
		bool mkLButton;			// �������Ƿ���
		bool mkMButton;			// ����м��Ƿ���
		bool mkRButton;			// ����Ҽ��Ƿ���
		short x;				// ��ǰ��� x ����
		short y;				// ��ǰ��� y ����
		short wheel;			// �����ֹ���ֵ (120 �ı���)
	}MOUSEMSG;
#else
	extern "C" typedef struct{
		UINT uMsg;				// ��ǰ�����Ϣ
		bool mkCtrl;			// Ctrl ���Ƿ���
		bool mkShift;			// Shift ���Ƿ���
		bool mkLButton;			// �������Ƿ���
		bool mkMButton;			// ����м��Ƿ���
		bool mkRButton;			// ����Ҽ��Ƿ���
		short x;				// ��ǰ��� x ����
		short y;				// ��ǰ��� y ����
		short wheel;			// �����ֹ���ֵ (120 �ı���)
	}MOUSEMSG;
#endif // !__cplusplus
		EasyX_C_API MOUSEMSG __stdcall GetMouseMsg();
		// ��ȡһ�������Ϣ�����û�У��͵ȴ�

	EasyX_C_API void __stdcall FlushMouseMsgBuffer();	// ��������Ϣ������
	EasyX_C_API LINESTYLE __stdcall CreateLS();
	EasyX_C_API LINESTYLE __stdcall CreateLSFromLS(LINESTYLE s);
	EasyX_C_API void __stdcall SetLS_Style(LINESTYLE s, DWORD style);
	EasyX_C_API void __stdcall SetLS_Puserstyle(LINESTYLE s, DWORD *puserstyle);
	EasyX_C_API void __stdcall SetLS_Userstylecount(LINESTYLE s, DWORD userstylecount);
	EasyX_C_API FILLSTYLE __stdcall CreateFS();
	EasyX_C_API FILLSTYLE __stdcall CreateFSFromFS(FILLSTYLE s);
	EasyX_C_API void __stdcall SetFS_Style(FILLSTYLE s, int style);
	EasyX_C_API void __stdcall SetFS_hatch(FILLSTYLE s, long hatch);
	EasyX_C_API void __stdcall SetFS_ppattern(FILLSTYLE s, IMAGE *ppattern);
	EasyX_C_API IMAGE __stdcall CreateI();
	EasyX_C_API IMAGE __stdcall CreateIFromI(IMAGE i);
	EasyX_C_API IMAGE __stdcall CreateIFromWH(int _width,int _height);
	EasyX_C_API int __stdcall GetIW(IMAGE i);
	EasyX_C_API int __stdcall GetIH(IMAGE i);
	EasyX_C_API void __stdcall ResizeI(IMAGE i,int _weight,int _height);

	EasyX_C_API void __stdcall settextstyle1(int nHeight, int nWidth, LPCTSTR lpszFace);
	EasyX_C_API void __stdcall settextstyle2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
	EasyX_C_API void __stdcall settextstyle3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
	EasyX_C_API void __stdcall settextstyle4(const LOGFONT *font);	// ���õ�ǰ������ʽ
	EasyX_C_API void __stdcall gettextstyle(LOGFONT *font);		// ��ȡ��ǰ������ʽ
	EasyX_C_API void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace);

	EasyX_C_API void __stdcall loadimage1(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight);					// ��ͼƬ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
	EasyX_C_API void __stdcall loadimage2(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth , int nHeight, bool bResize);	// ����Դ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
	EasyX_C_API void __stdcall loadimage3(IMAGE *pDstImg, LPCTSTR pImgFile);
	EasyX_C_API void __stdcall loadimage4(IMAGE *pDstImg, LPCTSTR pImgFile,int nWidth, int nHeight, bool bResize);
	EasyX_C_API void __stdcall saveimage(LPCTSTR pImgFile, IMAGE* pImg);																		// ����ͼ��(bmp/gif/jpg/png/tif)
	EasyX_C_API void __stdcall getimage(IMAGE *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight);// �ӵ�ǰ��ͼ�豸��ȡͼ��
	
#if defined(__cplusplus) && !defined(EXP)
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace) {
		settextstyle1(nHeight, nWidth, lpszFace);
	}
	void __stdcall settextstyle(const LOGFONT *font) {
		settextstyle4(font);
	}
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
		settextstyle3(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
	}
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
		settextstyle2(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
	}
	void loadimage(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth = 0, int nHeight = 0, bool bResize = false) {
		loadimage4(pDstImg, pImgFile, nWidth, nHeight, bResize);
	}					// ��ͼƬ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
	void loadimage(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth = 0, int nHeight = 0, bool bResize = false) {
		loadimage2((pDstImg),pResType, pResName, nWidth, nHeight, bResize);
	}	// ����Դ�ļ���ȡͼ��(bmp/gif/jpg/png/tif/emf/wmf/ico)
#endif 


	EasyX_C_API void __stdcall putimage1(int dstX, int dstY, const IMAGE *pSrcImg);												// ����ͼ����Ļ
	EasyX_C_API void __stdcall loadimage(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight);
	EasyX_C_API void __stdcall putimage2(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop);												// ����ͼ����Ļ
#if !defined(__cplusplus) && !defined(EXP)
	void __stdcall putimage(int dstX, int dstY, const IMAGE *pSrcImg) {
		putimage1(dstX, dstY, pSrcImg);
	}
#endif
	EasyX_C_API void __stdcall putimage3(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop);		// ����ͼ����Ļ(ָ�����)
	EasyX_C_API void __stdcall rotateimage(IMAGE *dstimg, IMAGE *srcimg, double radian, COLORREF bkcolor , bool autosize, bool highquality);// ��תͼ��
	EasyX_C_API void __stdcall Resize(IMAGE* pImg, int width, int height);	// ������ͼ�豸�Ĵ�С
	EasyX_C_API DWORD* __stdcall GetImageBuffer(IMAGE* pImg);			// ��ȡ��ͼ�豸���Դ�ָ��//Ĭ�Ͽ���NULL
	EasyX_C_API IMAGE* __stdcall GetWorkingImage();							// ��ȡ��ǰ��ͼ�豸
	EasyX_C_API void __stdcall SetWorkingImage(IMAGE* pImg);			// ���õ�ǰ��ͼ�豸//Ĭ�Ͽ���NULL
	EasyX_C_API HDC __stdcall GetImageHDC(IMAGE* pImg );				// ��ȡ��ͼ�豸���(HDC)//Ĭ�Ͽ���NULL
#if defined(__cplusplus) && !defined(EXP)
	void putimage(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop = SRCCOPY) {
		putimage2(dstX, dstY, pSrcImg, dwRop);
	}											// ����ͼ����Ļ
	void putimage(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY) {
		putimage3(dstX, dstY, dstWidth, dstHeight, pSrcImg, srcX, srcY, dwRop);
	}		// ����ͼ����Ļ(ָ�����)
#endif
													//δд
													// ��������

	EasyX_C_API int __stdcall	getwidth();			// ��ȡ��ͼ�����
	EasyX_C_API int	__stdcall	getheight();		// ��ȡ��ͼ���߶�
	EasyX_C_API int	__stdcall	getx();				// ��ȡ��ǰ x ����
	EasyX_C_API int	__stdcall	gety();				// ��ȡ��ǰ y ����

	EasyX_C_API void __stdcall	BeginBatchDraw();	// ��ʼ��������
	EasyX_C_API void __stdcall	FlushBatchDraw1();	// ִ��δ��ɵĻ�������
	EasyX_C_API void __stdcall	FlushBatchDraw2(int left, int top, int right, int bottom);	// ִ��ָ��������δ��ɵĻ�������
	EasyX_C_API void __stdcall	EndBatchDraw1();	// �����������ƣ���ִ��δ��ɵĻ�������
	EasyX_C_API void __stdcall	EndBatchDraw2(int left, int top, int right, int bottom);	// �����������ƣ���ִ��ָ��������δ��ɵĻ�������
#if defined(__cplusplus) && !defined(EXP)
	void __stdcall	FlushBatchDraw(){
		FlushBatchDraw1();
	}
	void __stdcall	FlushBatchDraw(int left, int top, int right, int bottom) {
		FlushBatchDraw2(left, top, right, bottom);
	}
	void __stdcall	EndBatchDraw() {
		EndBatchDraw1();
	}
	void __stdcall EndBathDraw(int left, int top, int right, int bottom) {
		EndBatchDraw2(left, top, right, bottom);
	}
#endif
	EasyX_C_API HWND __stdcall	GetHWnd();								// ��ȡ��ͼ���ھ��(HWND)
	EasyX_C_API TCHAR* __stdcall	GetEasyXVer();						// ��ȡ EasyX ��ǰ�汾

											// ��ȡ�û�����
	EasyX_C_API bool __stdcall	InputBox1(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt , LPCTSTR pTitle, LPCTSTR pDefault, int width , int height, bool bOnlyOK);
	EasyX_C_API bool __stdcall	InputBox2(LPTSTR pString,int nMaxCount);
#if defined(__cplusplus) && !defined(EXP)
	bool InputBox(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt = NULL, LPCTSTR pTitle = NULL, LPCTSTR pDefault = NULL, int width = 0, int height = 0, bool bOnlyOK = true) {
		return InputBox1(pString, nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
	}
#endif


	EasyX_C_API void  __stdcall	bar(int left, int top, int right, int bottom);		// ���ޱ߿�������
	EasyX_C_API void  __stdcall	bar3d(int left, int top, int right, int bottom, int depth, bool topflag);	// ���б߿���ά������

	EasyX_C_API void  __stdcall	drawpoly(int numpoints, const int *polypoints);	// �������
	EasyX_C_API void  __stdcall	fillpoly(int numpoints, const int *polypoints);	// �����Ķ����

	EasyX_C_API int  __stdcall	getmaxx();					// ��ȡ���Ŀ��ֵ
	EasyX_C_API int  __stdcall	getmaxy();					// ��ȡ���ĸ߶�ֵ

	EasyX_C_API COLORREF  __stdcall	getcolor();			// ��ȡ��ǰ��ͼǰ��ɫ
	EasyX_C_API void  __stdcall	setcolor(COLORREF color);	// ���õ�ǰ��ͼǰ��ɫ

	EasyX_C_API void  __stdcall	setwritemode(int mode);	// ����ǰ���Ķ�Ԫ��դ����ģʽ


	EasyX_C_API void  __stdcall	setfont1(int nHeight, int nWidth, LPCTSTR lpszFace);
	EasyX_C_API void  __stdcall	setfont2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
	EasyX_C_API void  __stdcall	setfont3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
	EasyX_C_API void  __stdcall	setfont4(const LOGFONT *font);	// ���õ�ǰ������ʽ
	EasyX_C_API void  __stdcall	getfont5(LOGFONT *font);
	EasyX_C_API void __stdcall setfont(int nHeight, int nWidth, LPCTSTR lpszFace);



	EasyX_C_API void __stdcall ainit();
	EasyX_C_API void __stdcall auninit();
	EasyX_C_API void __stdcall loadimagea1(IMAGE *pSrcImg,LPCTSTR pImgFile,bool bResize,int rWidth,int rHeight,bool bMove,int mX,int mY);
	EasyX_C_API void __stdcall loadimagea2(IMAGE *pSrcImg,LPCTSTR pResType, LPCTSTR pResName,bool bResize,int rWidth,int rHeight,bool bMove,int mX,int mY);
#if defined(__cplusplus) && !defined(EXP)
	void loadimagea(IMAGE *pSrcImg, LPCTSTR pImgFile, bool bResize = false, int rWidth = 0,int rHeight = 0, bool bMove = false, int mX = 0, int mY = 0) {
		loadimagea1(pSrcImg, pImgFile,bResize,rWidth,rHeight,bMove,mX,mY);
	}
	void loadimagea(IMAGE *pSrcImg, LPCTSTR pResType, LPCTSTR pResName, bool bResize = false, int rWidth = 0,int rHeight = 0, bool bMove = false, int mX = 0, int mY = 0) {
		loadimagea2(pSrcImg, pResType, pResName,bResize,rWidth,rHeight,bMove,mX,mY);
	}

#endif
	struct AIMAGE_INFORMATION{
		int m_Width;
		int m_Height;
	};
	EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION1(LPCTSTR pImgFile);
	EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName);
#if defined(__cplusplus) && !defined(EXP)
	struct AIMAGE_INFORMATION getAIMAGE_INFORMATION(LPCTSTR pImgFile) {
		return  getAIMAGE_INFORMATION1(pImgFile);
	}
	struct AIMAGE_INFORMATION getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName) {
		return  getAIMAGE_INFORMATION2(pResType,pResName);
	}
#endif
#endif
