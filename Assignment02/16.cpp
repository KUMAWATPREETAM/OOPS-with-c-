// Q16 Write a program in C++ to take an integer from the user and check whether it is a Palindrome number. Ex: 121; the reverse of a number equals the original number.
#include<iostream>
using namespace std;
int main(){
    int num,reverse = 0,remainder,temp;

    cout << "Enter a number to check it a palindrome or not :";
    cin >> num;
    temp = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num  /= 10;
    }

    cout << "REVERSE number is :" << reverse << endl;

    if (temp == reverse )
    {
        cout << "Enter number " << temp << " is a palindrome number";
    }

    else {
        cout << "Enter number " << temp << " is not  a palindrome number";

    }
    
    return 0;
}
