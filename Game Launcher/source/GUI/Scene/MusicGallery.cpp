#include "MusicGallery.hpp"


music_gallery::music_gallery(HWND hWnd, scene_manager_interface *Interface, unsigned short BmpWidth, unsigned short BmpHeight)
	:gallery(Interface, CAT_MUSIC, BmpWidth, BmpHeight)
{

}

music_gallery::~music_gallery()
{

}

int music_gallery::Initialize(HWND hWnd)
{
	DrawBkgnd();
	InvalidateRect(hWnd, NULL, false);
	UpdateWindow(hWnd);
	return 0;
}

int music_gallery::Finalize(HWND hWnd)
{
	return 0;
}

int music_gallery::LButtonUp(HWND hWnd, WPARAM wp, LPARAM lp)
{
	gallery::LButtonUp(hWnd, wp, lp);
	return 0;
}

int music_gallery::Update(HWND hWnd)
{
	return 0;
}
