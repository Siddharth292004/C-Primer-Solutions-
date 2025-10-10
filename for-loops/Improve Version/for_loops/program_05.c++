//  Check whether a number is prime or not:
// --------------------------------------------
//  Input a number to check prime or not: 13
//  The entered number is a prime number.

// improve version need 

#include <iostream>
using namespace std;

int main()
{
    int num1, ctr = 0;

    cout << "Check whether a number is prime or not:\n";
    cout << "----------------------------------------\n";
    cout << "Enter the a number to check prime or not: ";
    cin >> num1;

    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            ctr++;
        }
    }

    if (ctr == 2)
    {
        cout << "The entered number is prime.\n" << endl;
    }
    else
    {
        cout << "The entered number is not prime.\n" << endl;
    }
    return 0;
}