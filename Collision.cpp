#include "Collision.h"
#include <cmath>
#include <iostream>

bool Collision::isColliding(SDL_Rect* rectA, SDL_Rect* rectB) {
	if (sqrt(pow((rectA->x + rectA->w/2) - (rectB->x + rectB->w/2), 2) + pow((rectA->y + rectA->h/2) - (rectB->y + rectB->h/2), 2)) <= 10) {
		return true;
	}
	return false;
}