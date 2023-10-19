#pragma once

#ifndef Collision_h
#define Collision_h

#include <SDL.h>

class Collision {
public:
	static bool isColliding(SDL_Rect* rectA, SDL_Rect* rectB);
private:
};

#endif // !Collision_h
