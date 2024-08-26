// Q14) Write a program in C++ to take three angles as input and determine whether they can form an equilateral, isosceles or scalene triangle.
#include <iostream>
using namespace std;
int main()
{
    int sideA, sideB, sideC;

    cout << "Enter first side :";
    cin >> sideA;
    cout << "Enter second side :";
    cin >> sideB;
    cout << "Enter third side :";
    cin >> sideC;

    if (sideA + sideB + sideC < 180)
    {
        cout << "Please enter valid sum of side of a triangle";
    }

    else
    {
        if (sideA == sideB && sideB == sideC && sideA == sideC)
        {
            cout << "Your triange is a equilateral triange because your entered sides are :" << sideA << " " << sideB << " " << sideC << " are equal" << endl;
        }

        else if (sideA == sideB && sideB != sideC && sideA != sideC)
        {
            cout << "Your triange is a isosceles triange because your entered sides are :" << sideA << " " << sideB << " " << sideC << "two are equal" << endl;
        }
        else if (sideA != sideB && sideB != sideC && sideA != sideC)
        {
            cout << "Your triange is a scalen triange because your entered sides are :" << sideA << " " << sideB << " " << sideC << " are not equal" << endl;
        }
    }
    return 0;
}
