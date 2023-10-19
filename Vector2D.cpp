#include "Vector2D.h"

Vector2D::Vector2D(float xPos, float yPos){
	this->x = xPos;
	this->y = yPos;
}

const Vector2D Vector2D::operator+(const Vector2D v1) const noexcept {
	return Vector2D(x + v1.x, y + v1.y);
}

const Vector2D& Vector2D::operator-(const Vector2D v1) const noexcept {
	return Vector2D(x - v1.x, y - v1.y);
}

const Vector2D& Vector2D::operator*(const double factor) const noexcept {
	return Vector2D(x * factor, y * factor);
}

const Vector2D& Vector2D::operator/(const double factor) const noexcept {
	return Vector2D(x / factor, y / factor);
}

const Vector2D& Vector2D::operator/(const Vector2D v1) const noexcept {
	return Vector2D(x / v1.x, y / v1.y);
}

const std::string Vector2D::toString() {
	return std::to_string(this->x) + " " + std::to_string(this->y);
}

const Vector2D* Vector2D::zero() {
	return new Vector2D(0, 0);
}