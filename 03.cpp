// Q03) Write a program in C++ to display the size of all the data types.
#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
    int intval;
    char charval;
    float floatval;
    double doubleval;
    cout << "Enter a integer value :";
    cin >> intval; 
    cout << "Enter a character value :";
    cin >> charval;
    cout << "Enter a float value :";
    cin >> floatval;
    cout << "Enter a double value :";
    cin >> doubleval;   

cout << "Integer value is :" << intval << " and its data type is : " << typeid(intval).name() << endl;
cout << "Float value is :" << floatval << " and its data type is : " << typeid(floatval).name() << endl;
cout << "Character is :" << charval << " and its data type is : " << typeid(charval).name() << endl;
cout << "Double value is :" << doubleval << "and its data type is :" << typeid(doubleval).name() << endl;
    return 0;
}


