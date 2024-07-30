#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
cout << "Enter first number : ";
cin >> num1;

cout << "Enter second number :";
cin >> num2;

cout << "Enter value before swapping" << endl;
cout << "First number is : " << num1 << endl;
cout << "Second number is : " << num2 << endl;

// logic

num3 = num1;
num1 = num2;
num2 = num3;

cout << "Enter value after swapping" << endl;
cout << "First number is : " << num1 << endl;
cout << "Second number is : " << num2 << endl;

    return 0;
}