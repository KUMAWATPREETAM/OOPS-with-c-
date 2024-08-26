// Q11) Write a program in C++ to take an integer from the user and check if it is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a number :";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Enter number :" << num << "is a EVEN number" << endl;
    }
    else
    {
        cout << "Enter number :" << num << "is a ODD number" << endl;
    }
    return 0;
}