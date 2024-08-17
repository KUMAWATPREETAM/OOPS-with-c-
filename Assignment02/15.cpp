
// Q15) Write a program in C++ to take an integer from the user and calculate the factorial.
#include<iostream>
using namespace std;
int main(){
int count,num,fact = 1;

cout << "Enter a number :";
cin >> count;

for (num = 1; num <= count; num++)
{
    fact = fact*=num;
}

cout << "factorial of a number" << num << " is :" << fact ;

    return 0;
}