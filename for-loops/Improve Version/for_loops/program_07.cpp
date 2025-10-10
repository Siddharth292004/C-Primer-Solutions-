// Write a program in C++ to find the factorial of a number.

// Sample output:
// Input a number to find the factorial: 5
// The factorial of the given number is: 120

#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;

    cout << "\nEnter a number to find the factorial: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Invalid input! Please enter a non-negative number.\n";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        
        cout << "The factorial of the given number is: " << factorial << endl;
    }

    return 0;
}

