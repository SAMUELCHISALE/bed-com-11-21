#pragma once
#include <iostream>
#include "main.cpp"
#include "Box.cpp"

using namespace std;
class Box
{
public:
  Box();
  Box(const double newLength, const double newBreadith, const double newHeight);

  ~Box();
  double GetVolume();
  void SetLength(double len);
  void SetBreadith(double bre);
  void SetHeight(double hei);

  // overload + operator to add Two Box objects
  Box operator+(const Box &b);

private:
  double length;
  double breadith;
  double height;
};