#include "GameEngine/Vec2.hpp"
#include <cmath>

Vec2::Vec2() : x(0), y(0) {}

Vec2::Vec2(float xin, float yin) : x(xin), y(yin) {}

bool Vec2::operator==(const Vec2& v) { return (x == v.x) && (y == v.y); }

Vec2 Vec2::operator+(const Vec2& v) { return Vec2(x + v.x, y + v.y); }

Vec2 Vec2::operator*(const Vec2& v) { return Vec2(x * v.x, y * v.y); }

float Vec2::distance(const Vec2& v) {
  return sqrt((x - v.x)*(x - v.x) + (y - v.y)*(y - v.y));
}

Vec2& Vec2::add(const Vec2& v) {
  x += v.x;
  y += v.y;
  return *this;
}
