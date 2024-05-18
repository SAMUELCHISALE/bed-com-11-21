#include <iostream>
using namespace std;
int main()
{
  int numberArrays[5];
  int *pPointer = nullptr;
  // assign the address to the first element to the pointer
  pPointer = numberArrays;
  *pPointer = 10; // assigning the value first element.
  /*increament the the pointer using pointer arithmitic to assign the address
  of the second element to the pointer*/
  pPointer++;
  *pPointer = 20; // assign value to the second element

  // assign the address of the third element to the pointer
  pPointer = &numberArrays[2];
  *pPointer = 30; // assign value to the third element.
  /*assign the address of the fourth element to the pointer
  using pointer arithmetic*/
  pPointer = numberArrays + 3;
  *pPointer = 40; // assigning a value to the fourth element
  /*assign the address to the first element to the pointer*/
  pPointer = numberArrays;
  /*assigning the value to the fifth element using indirection and pointer arithmetic*/
  *(pPointer + 4) = 50;
  // iterate and output all the elements in the array
  for (int n = 0; n < 5; n++)
  {
    cout << numberArrays[n] << ", ";
    }
  return 0;
}