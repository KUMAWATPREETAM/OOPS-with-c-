// Q08) Write a program in C++ to take two integers from the user and implement all Arithmetic Operations.
#include<iostream>
using namespace std;
int main(){
//take input from user    
int num1,num2;
 cout << "Enter first number :";
 cin >> num1;
cout << "Enter second number :";
 cin >> num2;
//implement all arithmetic operation from user 
cout << "Sum of " << num1 << " + " << num2 << " is :" << num1 + num2 <<endl;  
cout << "Subtract of " << num1 << " - " << num2 << " is :" << num1 - num2 <<endl;  
cout << "Multiplication of " << num1 << " * " << num2 << " is :" << num1 * num2 <<endl;  
cout << "Division of " << num1 << " / " << num2 << " is :" << num1 / (float)num2 <<endl;  
cout << "Modulus of " << num1 << " % " << num2 << " is :" << num1 % num2 <<endl;  

return 0;
}