// Q07) Write a program in C++ to swap two integers taken from the user.
#include<iostream>
using namespace std;
int main(){
// take input from user    
    int num1,num2,num3;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number :";
    cin >> num2;
// print output before swap
    cout << "Enter value before swapping" << endl;
    cout << "First number is : " << num1 << endl;
    cout << "Second number is : " << num2 << endl;
// logic for swap using three variable
    num3 = num1;
    num1 = num2;
    num2 = num3;
// print output after swap
    cout << "Enter value after swapping" << endl;
    cout << "First number is : " << num1 << endl;
    cout << "Second number is : " << num2 << endl;

    return 0;
}