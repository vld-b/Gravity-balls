#pragma once

#ifndef Vector2D_h
#define Vector2D_h
#include <iostream>
#include <string>


class Vector2D {
public:
	float x;
	float y;

	Vector2D() : x(0.f), y(0.f) { }
	Vector2D(float xPos, float yPos);

	const Vector2D operator+(const Vector2D v1) const noexcept;
	const Vector2D& operator-(const Vector2D v1) const noexcept;
	const Vector2D& operator*(const double factor) const noexcept;
	const Vector2D& operator/(const double factor) const noexcept;
	const Vector2D& operator/(const Vector2D v1) const noexcept;

	const std::string toString();

	static const Vector2D* zero();

private:
};

#endif // !Vector2D_H
