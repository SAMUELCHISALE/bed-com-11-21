#include <iostream>
using namespace std;
// this code wants to see the use of sizeOf()
int main()
{
  string name = "calmboy";
  cout << " size of char : " << sizeof(char) << endl;
  cout << " size of long : " << sizeof(long) << endl;
  cout << " size of int : " << sizeof(int) << endl;
  cout << " size of float : " << sizeof(float) << endl;
  cout << " size of double : " << sizeof(double) << endl;
  cout << " size of   wchar_t : " << sizeof(wchar_t) << endl;
  cout << " size of short int : " << sizeof(short int) << endl;
  cout << " size of string is : " << sizeof(name) << endl;

  return 0; // the program still run without this (return 0).

  // the sizeof() operator is used to workout the size of various datatype.
}