#include "AppGallery.hpp"


AppGallery::AppGallery(HWND hWnd, SceneChangerInterface *SceneChanger, unsigned short BmpWidth, unsigned short BmpHeight)
	:Gallery(SceneChanger, CAT_APP, BmpWidth, BmpHeight)
{

}

AppGallery::~AppGallery()
{

}

int AppGallery::Initialize(HWND hWnd)
{
	DrawBkgnd();
	InvalidateRect(hWnd, NULL, false);
	UpdateWindow(hWnd);
	return 0;
}

int AppGallery::Finalize(HWND hWnd)
{
	return 0;
}

int AppGallery::LButtonUp(HWND hWnd, WPARAM wp, LPARAM lp)
{
	Gallery::LButtonUp(hWnd, wp, lp);
	return 0;
}

int AppGallery::Update(HWND hWnd)
{
	return 0;
}
