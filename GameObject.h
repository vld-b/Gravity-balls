#pragma once

#ifndef GameObject_h
#define GameObject_h

#include "Game.h"
#include "Vector2D.h"

class GameObject {
public:
	Vector2D pos;

	GameObject(const char* textureSheet, SDL_Renderer* render, int x, int y, int w, int h, int scale);
	~GameObject();

	void Update();
	void Render();

	SDL_Rect* getRect();
private:
	SDL_Texture* ObjTexture;
	SDL_Rect destRect;
	SDL_Renderer* renderer;
	Vector2D velocity = Vector2D(10.f, -10.f);
	Vector2D gravity = Vector2D(0, 9.8f);
	Vector2D linearDrag = Vector2D(2.f, 1.f);
};

#endif // !GameObject_h
