#include "GameGallery.hpp"


game_gallery::game_gallery(HWND hWnd, scene_manager_interface *SceneChanger, unsigned short BmpWidth, unsigned short BmpHeight)
	:gallery(SceneChanger, CAT_GAME, BmpWidth, BmpHeight)
{

}

game_gallery::~game_gallery()
{

}

int game_gallery::Initialize(HWND hWnd)
{
	DrawBkgnd();
	InvalidateRect(hWnd, NULL, false);
	UpdateWindow(hWnd);
	return 0;
}

int game_gallery::Finalize(HWND hWnd)
{
	return 0;
}

int game_gallery::LButtonUp(HWND hWnd, WPARAM wp, LPARAM lp)
{
	gallery::LButtonUp(hWnd, wp, lp);
	return 0;
}

int game_gallery::Update(HWND hWnd)
{
	return 0;
}