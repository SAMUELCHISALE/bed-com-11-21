@@ -0,0 +1,31 @@
#include <iostream>
#include <string>

using namespace std;

int main()
{
  // Dynamically allocate an integer
  int *dynamicInt = new int;

  // Dynamically allocate a string
  string *dynamicString = new string;

  // Prompt the user to input values
  cout << "Enter an integer: ";
  cin >> *dynamicInt;

  cout << "Enter a string: ";
  cin.ignore(); // Ignore the newline character left in the buffer
  getline(cin, *dynamicString);

  // Output the values
  cout << "Integer value: " << *dynamicInt << endl;
  cout << "String value: " << *dynamicString << endl;

  // Deallocate the dynamically allocated memory
  delete dynamicInt;
  delete dynamicString;

  return 0;
}