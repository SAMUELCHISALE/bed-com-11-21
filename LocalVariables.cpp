 #include<iostream>
         using namespace std; // global variables are also executed
           int b = 87;
            int l = 4;
              int sum = b + l;
       // its oky to have global variable with same name as local variable, no problem
      //but problem comes in if they both exist in same function....the problem is called 'naming collision'
                int main(){
              double x = 4.01;
            int y = 32;
             double z = 12;
           int b = 10;

      double p = z - x;
        cout<<"The value of sum : is " <<sum <<endl;
            cout<<"The value of b : is " <<b <<endl; /*here the value of b is 10, why ? 
                 because if you have global and local variables, 
                      the value of local variable has the preference.*/



        }