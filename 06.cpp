// Q06) Write a program in C++ to compute the quotient and the remainder of two integers.
#include<iostream>
using namespace std;
int main(){
    int divisor,dividend,remainder;
   cout << "Enter Divisor value :";
   cin >> divisor;

   cout << "Enter Dividend value :";
   cin >> dividend;
// type casting
float quotient = (float)dividend / (float)divisor ;
remainder =  dividend % divisor;

cout << "Quotient : " << quotient << endl;
cout << "Remainder : " << remainder << endl;

    return 0;
}
