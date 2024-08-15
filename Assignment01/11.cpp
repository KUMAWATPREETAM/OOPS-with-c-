// Q011) Write a program in C++ to display the size of all the data types.

#include<iostream>
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
    cout << "Integer value is :" << int_val << " and its size  is : " << sizeof(int_val) << endl;
    cout << "Float value is :" << float_val << " and its size   is : " << sizeof(float_val) << endl;
    cout << "Character is :" << char_val << " and its  size  is : " << sizeof(char_val) << endl;
    cout << "Double value is :" << double_val << "and its size  is :" << sizeof(double_val) << endl;

    return 0;
}
