#pragma once

/*
 * Vec2 class - Represents a 2D mathematical vector and provides basic vector
 * operations
 */

class Vec2 {
 public:
  float x, y;  // x,y component of vector

  Vec2();
  Vec2(float xin, float yin);

  bool operator==(const Vec2 &v) const;  // v1 equal v2 ?
  bool operator!=(const Vec2 &v) const;  // v1 not equal v2 ?

  Vec2 operator+(const Vec2 &v) const;    // v = v1 + v2
  Vec2 operator-(const Vec2 &v) const;    // v = v1 - v2
  Vec2 operator*(const float val) const;  // v = v1 * val
  Vec2 operator/(const float val) const;  // v = v1 / val

  void operator+=(const Vec2 &v);  // v = v + v1
  void operator-=(const Vec2 &v);  // v = v - v1
  void operator*=(const Vec2 &v);  // v = v * v1
  void operator/=(const Vec2 &v);  // v = v / v1

  float dist(const Vec2 &v) const;  // distance between two vector
  float length() const;             //  magnitude of vector
  void normalize();                 // normalize vector
};
