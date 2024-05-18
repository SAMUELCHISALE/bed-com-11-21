#include<iostream>
    using namespace std;
      int main(){ // main() where execution begins
    int a = 21;
  int b = 10;
              int c;
            c = a + b; // adding a and b
          cout<<"The value of c is : "<< c <<endl;
        c = a % b; // modulus, the answer here is a remainder
      cout<<"The new value of c is now : "<< c <<endl;
   c = a / b; //dividing a by b, the answer is the quotient.
   cout<<"The value of c this time is : "<< c <<endl;
c = a++;
cout<<"The value of c after incrementing by 1 is : "<< c <<endl;
c = a--;
cout<<"The value of c after decrementing by 1 is : "<<c<<endl;
  c = a;
  cout<<"The value of c is : "<< c <<endl;
        return 0;
        /*increments operator are of two types.
        we have post increment(a++) and pre increment operator(++a).
        post increment operator(a++), increments the value of a variable
        but uses the initial / original value  first and uses the new value in next
        execution*/
        /*on the other hand, pre increment operator inrements the value by 1
        and uses it right away*/




      }