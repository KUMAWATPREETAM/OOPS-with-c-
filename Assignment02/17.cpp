// Q17) Write a program in C++ to take an integer from the user and check whether it is a Prime number.
#include <iostream>
using namespace std;
int main()
{
    int num, i, flag = 0;
    cout << "Enter a number :";
    cin >> num;

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "NOT Prime";
    }
    else
    {
        cout << "Prime";
    }

    return 0;
}

// sive of erathones