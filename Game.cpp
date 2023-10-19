#include "Game.h"
#include "TextureManager.h"
#include "GameObject.h"
#include <iostream>
#include "Collision.h"

GameObject* player;

SDL_Rect temp = { 128, 128, 1024, 1024 };

Game::Game(SDL_Window* win, SDL_Renderer* renderer) {
	this->win = win;
	this->renderer = renderer;
	isRunning = true;

	player = new GameObject("Assets/img/ball.png", this->renderer, 500, 500, 32, 32, 2);
}
Game::~Game() {}

void Game::update() {
	player->Update();
	//std::cout << player->pos.x << std::endl;
	//std::cout << player->pos.y << std::endl;
	if (Collision::isColliding(player->getRect(), &temp)) {
		std::cout << "Lmao hit dead" << std::endl;
	}
}

void Game::handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;

	default:
		break;
	}
}

void Game::render() {
	SDL_RenderClear(renderer);
	player->Render();
	SDL_RenderPresent(renderer);
}

void Game::clean() {
	SDL_DestroyWindow(win);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

void Game::running() {}