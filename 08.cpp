#include<iostream>
using namespace std;
int main(){
int num1,num2;
 cout << "Enter first number :";
 cin >> num1;
cout << "Enter second number :";
 cin >> num2;

cout << "Sum of " << num1 << " + " << num2 << " is :" << num1 + num2 <<endl;  
cout << "Subtract of " << num1 << " - " << num2 << " is :" << num1 - num2 <<endl;  
cout << "Multiplication of " << num1 << " * " << num2 << " is :" << num1 * num2 <<endl;  
cout << "Division of " << num1 << " / " << num2 << " is :" << num1 / (float)num2 <<endl;  
cout << "Modulus of " << num1 << " % " << num2 << " is :" << num1 % num2 <<endl;  

return 0;
}