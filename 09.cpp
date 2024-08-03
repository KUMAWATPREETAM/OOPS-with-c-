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

    if (a > b && a > b && a > c )
    {
      cout << "Enter number " << a << " is greater than" <<" " << b <<" and " << c;
    }
    else if (b > a && b > c)
    {
        cout << "Enter number " << b << " is greater than" <<" " << c << " and " << a;
    }
    else if (c > a && c > b)
    {
        cout << "Enter number " << c << " is greater than" <<" " << a << " and " << b;
    }
    else{
        cout << "Please enter different number You enter same number is  :" << a << " " << b <<" " << c; 
    }
    
    return 0;
}