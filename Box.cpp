#pragma once
#include "Box.h"
Box::Box()
{
  length = 0.0;
  breadith = 0.0;
  height = 0.0;
}
Box::Box()
{
}
double Box::GetVolume()
{
  return length * breadith * height;
}
void Box::SetLength(double len)
{
  length = len;
}
void Box::SetBreadith(double bre)
{
  breadith = bre;
}
void Box::SetHeight(double hei)
{
  height = hei;
}
// overload + operator to add Two box onjects.
Box Box::operator+(const Box &b)
{
  Box box;
  box.length = this->length + b.length;
  box.breadith = this->breadith + b.breadith;
  box.height = this->height + b.height;

  return box;
}