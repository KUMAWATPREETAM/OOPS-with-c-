// Q05) Write a program in C++ to multiply two floating-point numbers.
#include<iostream>
using namespace std;
int main(){
// declaration
    float num1,num2,sum;
// take input from user
    cout << "Enter first decimal numer :";
    cin >> num1;
    cout << "Enter second decimal number :";
    cin >> num2;
// operation on number
    sum = num1 * num2;
//   print output
    cout << "Multiplaction of " << num1 << " * " << num2 << " is : " << sum; 

    return 0;
}