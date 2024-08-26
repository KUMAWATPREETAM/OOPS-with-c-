// Q19 Write a program in C++ to take an integer from the user and check whether it is an Armstrong number. Ex: 153; cube(1) + cube(5) + cube(3) = 1 + 125 + 27 = 153 (original number).

#include <iostream>
using namespace std;
int main()
{
    int num, org, rem, res = 0;

    cout << "Enter a number to it is a armstrong or not :";
    cin >> num;

    org = num;

    while (org != 0)
    {
        rem = org % 10;
        res += rem * rem * rem;
        org /= 10;
    }

    if (res == num)
    {
        cout << "Armstrong ";
    }

    else
    {
        cout << " Not Armstrong ";
    }

    cout << res;

    return 0;
}
