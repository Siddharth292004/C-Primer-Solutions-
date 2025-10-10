// Write a program in C++ to find the first 10 natural numbers.

#include <iostream>
using namespace std;

int main()
{
    cout << "Find the first 10 natural numbers:\n";
    cout << "-----------------------------------\n";
    cout << "The natural numbers are:\n";

    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 0;
}