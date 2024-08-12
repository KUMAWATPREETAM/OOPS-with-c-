// Q03) Write a program in C++ to display the data type of all the data types.
#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
 //declaration 
    int int_val;
    char char_val;
    float float_val;
    double double_val;
 //take input from user 
    cout << "Enter a integer value :";
    cin >> int_val; 
    cout << "Enter a character value :";
    cin >> char_val;
    cout << "Enter a float value :";
    cin >> float_val;
    cout << "Enter a double value :";
    cin >> double_val;   
// print the output 
    cout << "Integer value is :" << int_val << " and its data type is : " << typeid(int_val).name() << endl;
    cout << "Float value is :" << float_val << " and its data type is : " << typeid(float_val).name() << endl;
    cout << "Character is :" << char_val << " and its data type is : " << typeid(char_val).name() << endl;
    cout << "Double value is :" << double_val << "and its data type is :" << typeid(double_val).name() << endl;
    return 0;
}


