#pragma once

#ifndef TextureManager_h
#define TextureManager_h

#include "Game.h"

class TextureManager {
public:
	static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* render);
};

#endif // !TextureManager_h