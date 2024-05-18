#include <iostream>
using namespace std;
int main()
{
  // null pointer
  int *pPointer = nullptr;
  int numberArrays[3] = {10, 20, 30};
  // assign address of the first element to pointer
  pPointer = numberArrays;
  // output the address of the first element
  cout << "Address at pointer : " << pPointer << endl;
  cout << "Address of numberArrays[0] : " << numberArrays << endl;

  // output value  of first element using the pointer and indirection
  cout << "value at pointer : " << *pPointer << endl;
  // output the value of the second element
  cout << "Address at ++pointer : " << *(++pPointer) << endl;
  // assign address of the first element to the pointer
  pPointer = numberArrays;
  // this output the value of the first element
  cout << "the value at pointer++ : " << *(pPointer++) << endl;

  return 0;
}
