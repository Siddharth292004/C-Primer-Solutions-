// 4. Sum Using Variables

// Write a program in C++ to print the sum of two numbers using variables.

#include<iostream>
using namespace std;

int main(){
    int num1, num2, sum;

    cout << "Find the sum of two numbers:\n";
    cout << "----------------------------\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << endl;

    return 0;
}