#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename, SDL_Renderer* render) {
	SDL_Surface* tempSurf = IMG_Load(filename);
	SDL_Texture* tex = SDL_CreateTextureFromSurface(render, tempSurf);
	SDL_FreeSurface(tempSurf);

	return tex;
}