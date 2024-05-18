#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
  Person();
  Person(float newheight);
  ~Person();
  float operator+(const Person &otherPerson);

private:
  float newheight;
  string mFirstName;
  int mAge;
};