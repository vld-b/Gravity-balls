#pragma once

#ifndef Game_h
#define Game_h

#include <SDL.h>
#include <SDL_image.h>

class Game {
public:
	bool isRunning;
	float speed = 1.f;

	Game(SDL_Window* win, SDL_Renderer* renderer);
	~Game();

	void update();
	void handleEvents();
	void render();
	void clean();

	void running();

private:
	SDL_Window* win;
	SDL_Renderer* renderer;
};

#endif // !Game
