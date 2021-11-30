/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 */
#include <iostream>

using namespace std;

int main()
{
string operation;
double num1, num2;
cout<<"Enter the operatoin, then number, then  number: ";
cin >> operation>>num1>>num2;
if(operation == "+") {
cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<(num1+num2)<<endl;
}
else if(operation == "-") {
cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<(num1-num2)<<endl;
}
else if(operation == "*") {
cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<(num1*num2)<<endl;
} else if(operation == "/") {
cout<<"Division of "<<num1<<" and "<<num2<<" is "<<(num1/num2)<<endl;
}

return 0;
}