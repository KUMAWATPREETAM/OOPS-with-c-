// Q17) Write a program in C++ to take an integer from the user and check whether it is a Prime number.
#include <iostream>
using namespace std;
int main()
{
    int num, run, flag = 0;
    cout << "Enter a number :";
    cin >> num;

    for (run = 0; run <= 2 / num; run++) // first
    {
        if (run % num == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "composite \n";
    }
    else
    {
        cout << "prime \n";
    }

    return 0;
}

// sive of erathones