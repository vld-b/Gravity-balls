#include <SDL.h>
#include "Game.h"
#include <time.h>
#include <iostream>

const int FPS = 60;
const int frameDelay = 1000 / FPS;

Uint32 frameStart;
int frameTime;

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* win = SDL_CreateWindow("2D Sim", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 540, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(win, -1,  0);

	Game *game = new Game(win, renderer);

	SDL_SetRenderDrawColor(renderer, 42, 195, 163, 255);

	while (game->isRunning) {
		frameStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}

		// std::cout << deltaTime << std::endl;
	}

	game->clean();
	
	return 0;
}