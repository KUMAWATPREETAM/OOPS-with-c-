// Q12) Write a program in C++ to input a year from the user and check for leap year.
#include<iostream>
using namespace std;
int main(){
int year;
cout << "Enter a year to cheek leap or not :";
cin >> year;

if(year % 4 == 0 &&  year % 100 != 0 ||  year % 400 == 0  ){
    cout << "Enter Year is a Leap Year" << endl;
}
else{
    cout << "Enter Year is not a Leap Year" << endl;
}
return 0;
}