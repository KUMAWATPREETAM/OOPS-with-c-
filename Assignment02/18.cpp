// Q18) Write a program in C++ to take an integer 'n' from the user and display all the Fibonacci series up to that n-th term.
#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the size of series: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 1; i <= n - 2; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << ", " << nextTerm;
    }

    return 0;
}
