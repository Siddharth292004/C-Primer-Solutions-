//  Find the first 10 natural numbers:
// ---------------------------------------
//  The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10
//  The sum of first 10 natural numbers: 55

#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;

    cout << "Find the first 10 natural numbers:\n";
    cout << "-----------------------------------\n";
    cout << "The natural numbers are:\n";

    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "\nSum of first 10 natural number : " << sum << endl;
    cout << endl;

    return 0;
}