// Q09) Write a program in C++ to take three integers as input and find the largest and the smallest from them.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter first number :";
    cin >> a; 
    cout << "Enter second number :";
    cin >> b;
    cout << "Enter third number :";
    cin >> c;

    if (a > b )
    {
      cout << "Enter number " << a << " is greater than" <<" " << b <<" and " << c;
    }
    else if (b > c )
    {
        cout << "Enter number " << b << " is greater than" <<" " << c << " and " << a;
    }
    else if (c > a)
    {
        cout << "Enter number " << c << " is greater than" <<" " << a << " and " << b;
    }
    else if (a > c)
    {
        cout << "Enter number " << a << " is greater than" <<" " << c << " and " << b;
    }

        else{
        cout << "Please enter different number You enter same number is  :" << a << " " << b <<" " << c; 
    }
  cout << "\n";
//    small 

    if (a < b )
    {
      cout << "Enter number " << a << " is less than" <<" " << b <<" and " << c;
    }
    else if (b < c )
    {
        cout << "Enter number " << b << " is less than" <<" " << c << " and " << a;
    }
    else if (c < a)
    {
        cout << "Enter number " << c << " is less than" <<" " << a << " and " << b;
    }
    else if (a < c)
    {
        cout << "Enter number " << a << " is less than" <<" " << c << " and " << b;
    }
    else{
        cout << "Please enter different number You enter same number is  :" << a << " " << b <<" " << c; 
    }
    
    return 0;
}