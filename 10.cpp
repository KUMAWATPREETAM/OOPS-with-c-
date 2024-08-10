// Q10) Write a program in C++ to check if an input character is a vowel or not.
#include<iostream>
using namespace std;
int main(){
//declaration
    char ch;
//take input from user
    cout << "Enter a character to check it is vowel or not :";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
// execute if a character is a vowel
        cout << "Enter character '" << ch << "' is a vowel ";
        break;
// execute if a character is a consonant
    default:
        cout << "Enter character '" << ch << "' is a consonant ";
        break;
    }

    return 0;
}


