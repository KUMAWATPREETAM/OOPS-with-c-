// Q06) Write a program in C++ to compute the quotient and the remainder of two integers.
#include<iostream>
using namespace std;
int main(){
// declaration of variables     
    int divisor,dividend,remainder;
// take input from user   
    cout << "Enter Divisor value :";
    cin >> divisor;
    cout << "Enter Dividend value :";
    cin >> dividend;
// type casting int to float
float quotient = (float)dividend / (float)divisor ;
remainder =  dividend % divisor;
// display the output
cout << "Quotient : " << quotient << endl;
cout << "Remainder : " << remainder << endl;

    return 0;
}
