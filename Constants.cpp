// Constants
#include <iostream>
using namespace std;
// constants variables = variables whose value is permanent, doesn't change.
int main()
{
  const int Length = 50;
  const int Width = 38;
  int Area;
  const char newline = '\n';
  Area = Length * Width;

  cout << Area;
  cout << newline;
  return 0;
}
