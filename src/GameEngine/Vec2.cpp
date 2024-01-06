#include "Vec2.hpp"
#include <cmath>

Vec2::Vec2() : x(0), y(0) {}

Vec2::Vec2(float xin, float yin) : x(xin), y(yin) {}

// Equality operator
bool Vec2::operator==(const Vec2 &rhs) const {
  return (x == rhs.x) && (y == rhs.y);
}

// Inquality operator
bool Vec2::operator!=(const Vec2 &rhs) const {
  return (x != rhs.x) || (y != rhs.y);
}

// Addition of vector
Vec2 Vec2::operator+(const Vec2 &rhs) const {
  return Vec2(x + rhs.x, y + rhs.y);
}

// Subtraction of vector
Vec2 Vec2::operator-(const Vec2 &rhs) const {
  return Vec2(x - rhs.x, y - rhs.y);
}

// Scalar multiplication
Vec2 Vec2::operator*(const float val) const { return Vec2(x * val, y * val); }

// Scalar division
Vec2 Vec2::operator/(const float val) const {
  // avoid division by zero by checking if val is not zero
  return (val != 0 ? Vec2(x / val, y / val) : *this);
}

// Compound addition assignment operator
void Vec2::operator+=(const Vec2 &v) {
  x += v.x;
  y += v.y;
}

// Compound subtraction assignment operator
void Vec2::operator-=(const Vec2 &v) {
  x -= v.x;
  y -= v.y;
}

// Compound multiplication assignment operator
void Vec2::operator*=(const Vec2 &v) {
  x *= v.x;
  y *= v.y;
}

// Compound division assignment operator
void Vec2::operator/=(const Vec2 &v) {
  if (v.x != 0.0f && v.y != 0.0f) {
    x /= v.x;
    y /= v.y;
  }
}

// Distance between two vector
float Vec2::dist(const Vec2 &v) const {
  return sqrt((x - v.x) * (x - v.x) + (y - v.y) * (y - v.y));
}

// Calculate the Euclidean length (magnitude) of the vector
float Vec2::length() const { return sqrt((x * x) + (y * y)); }

// Normalize the vector to make its length (magnitude) equal to 1
void Vec2::normalize() {
  float len = length();
  if (len != 0.0f) {
    x /= len;
    y /= len;
  }
}
