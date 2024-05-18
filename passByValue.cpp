 #include <iostream>
4 using namespace std;
5
6
7
8 int main() {
9 int number{5};
10
11 cout << "The original value of number is " << number;
12 
13 cout << "\nThe new value of number is " << number << endl;
14 } 
15
16
17
18
19
The original value of number is 5
The new value of number is 125
Fig. 8.6 | Pass-by-value used to cube a variable’s value.
*nPtr = (*nPtr) * (*nPtr) * (*nPtr); // cube *nPtr
 // Fig. 8.7: fig08_07.cpp
 // Pass-by-reference with a pointer argument used to cube a 
 // variable’s value.
#include <iostream>
 using namespace std;
 int main() {
 int number{5};

int cubeByValue(int); // prototype
number = cubeByValue(number); // pass number by value to cubeByValue
// calculate and return cube of integer argument 
int cubeByValue(int n) { 
 return n * n * n; // cube local variable n and return result
} 
