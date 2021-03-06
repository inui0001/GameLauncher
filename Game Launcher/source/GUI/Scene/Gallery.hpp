#pragma once

#include "Scene.hpp"

#ifndef INCLUDE_Gallery_HPP
#define INCLUDE_Gallery_HPP


class Gallery : public Scene
{
	const static COLORREF BkgndColor = RGB(0x1f, 0x1f, 0x1f);
	HBRUSH hBrushBkgnd;//背景塗りつぶし用
	HPEN hPenBkgnd;//背景塗りつぶし用

public:
	Gallery(SceneChangerInterface* SceneChanger, unsigned short BmpWidth, unsigned short BmpHeight);
	~Gallery();
};


#endif