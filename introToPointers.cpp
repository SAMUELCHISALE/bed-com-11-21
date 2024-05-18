#include<iostream>
  using namespace std;
    int main (){
      //declare and initialize  pointer so that it dont'nt keep random address
      int *pPointer = nullptr;
        int integerVar = 5;
        //assign pointer to address of the object( variable integerVar)
          pPointer = &integerVar;
            //output value of integerVar
            cout <<"The value of integerVar is : " <<integerVar<<endl;
              //output value address of integerVar
               cout <<"The the address of integerVar : " <<&integerVar<<endl;
               //output the address assigned to the pointer
                cout <<"The address assigned to the pointer is : " <<pPointer<<endl;
                //output the address of pPointer
                 cout <<"The address of the pPointer  is : " <<&integerVar<<endl;
                 return 0;

    }