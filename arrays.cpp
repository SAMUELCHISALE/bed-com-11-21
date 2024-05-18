#include <iostream>
using namespace std;
int main()
{
  int *ptr = nullptr;
  int arraySize;
  cout << "ENTER THE ARRAY SIZE : " << endl;
  cin >> arraySize;
  cout << endl;
  ptr = new int[arraySize];
  cout << arraySize;
}