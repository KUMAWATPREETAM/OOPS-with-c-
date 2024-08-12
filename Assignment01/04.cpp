// Q04) Write a program in C++ to take two integers from the user, add them, and print the result.
#include<iostream>
using namespace std;
int main(){
// DECLARATION
    int num1,num2,sum;
// INPUT FROM USER
    cout << "Enter first number :";
    cin >> num1;
    cout << "Enter second number :";
    cin >> num2;
// Logic for add two integer
    sum = num1 + num2;
// print output
    cout << "Sum of " << num1 << " + " << num2 << " is : " << sum;

    return 0;
}