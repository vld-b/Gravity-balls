#include "GameObject.h"
#include "TextureManager.h"
#include <iostream>
#include <string>

GameObject::GameObject(const char* textureSheet, SDL_Renderer* render, int x, int y, int w, int h, int scale) {
	this->renderer = render;
	this->pos = Vector2D(x, y);
	ObjTexture = TextureManager::LoadTexture(textureSheet, renderer);
	destRect = { x, y, w * scale, h * scale };
}

void GameObject::Update() {
	velocity = velocity + (gravity / 60);
	//velocity = velocity / linearDrag;
	pos = pos + velocity;

	std::cout << velocity.toString() << std::endl;
	std::cout << pos.toString() << std::endl;

	destRect.x = pos.x;
	destRect.y = pos.y;
}

void GameObject::Render() {
	SDL_RenderCopy(this->renderer, ObjTexture, NULL, &destRect);
}

SDL_Rect* GameObject::getRect() {
	return &this->destRect;
}