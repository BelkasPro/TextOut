#include <iostream>
#include <Windows.h>
#define MYRGB(r,g,b) (r | g << 8 | b << 16)
using namespace std;
int main()
{


	LPCWSTR lptext = L"Your Text"; //You can make your own text
	while (true) {

		HDC hdc;
		hdc = GetWindowDC(GetDesktopWindow());
		int sw = GetSystemMetrics(0);
		int sh = GetSystemMetrics(1);
		SetTextColor(hdc, MYRGB(0, 0, 0)); //You can make your text color
		SetBkColor(hdc, MYRGB(255, 255, 255)); //You can make your own background color
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
}
