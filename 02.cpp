#include <iostream>
using namespace std;

int main() {
    // Declaration of variables of different data types
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Take input from the user
    cout << "Enter an integer: ";
    cin >> integerVar;
    
    cout << "Enter a float: ";
    cin >> floatVar;

    cout << "Enter a double: ";
    cin >> doubleVar;

    cout << "Enter a character: ";
    cin >> charVar;

    // Display the values
    cout << "\nYou entered:" << endl;
    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;

    return 0;
}










// #include<stdio.h>
// int main(){
//     int num;
// printf("Enter an int value :");
// scanf("%d",&num);
// printf("Enter value is %d",num);


//     return 0;
// }