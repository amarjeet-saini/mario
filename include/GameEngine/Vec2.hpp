#pragma once

/*
 * Vec2 class - Represents a 2D mathematical vector and provides basic vector
 * operations
 */

class Vec2 {
 public:
  float x, y;
  Vec2();
  Vec2(float xin, float yin);
  bool operator==(const Vec2& v);  // compare two vectors
  Vec2 operator+(const Vec2& v);   // add two vectors
  Vec2 operator*(const Vec2& v);   // multiply two vectors
  float distance(const Vec2& v);   // norm between two vectors
  Vec2& add(const Vec2& v); // v = v + v1
};
