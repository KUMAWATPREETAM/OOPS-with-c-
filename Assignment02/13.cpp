// Q13) Write a program in C++ to create a grade calculator based on the percentage marks obtained. Use "if - else if - else" statements to assign grades like O for 91-100, A for 81-90, B for 71-80, C for 61-70, D for 51-60, E for 41-50, F for 40 and below.
#include<iostream>
using namespace std;
int main(){

int marks;

cout << "Enter your marks :";
cin >> marks ;

if (marks > 100 && marks <= 0)
{
    cout << "Please Enter marks between 1 to 100";
}

else if(marks >= 91 && marks <=100){
    cout << "you obtain grade O because your marks is :"<< marks << "this is invalid"; 
}

else if(marks >= 81 && marks <=90){
    cout << "you obtain grade A because your marks is :"<< marks; 
}
else if(marks >= 71 && marks <=80){
    cout << "you obtain grade B because your marks is :"<< marks; 
}

else if(marks >= 61 && marks <=70){
    cout << "you obtain grade C because your marks is :"<< marks; 
}

else if(marks >= 51 && marks <=60){
    cout << "you obtain grade D because your marks is :"<< marks; 
}

else if(marks >= 41 && marks <=50){
    cout << "you obtain grade E because your marks is :"<< marks; 
}

else if(marks <= 40 ){
    cout << "you obtain grade F because your marks is :"<< marks; 
}

else{
    cout << "Please enter valid marks your entered marks is :"<< marks; 
}

    return 0;
}