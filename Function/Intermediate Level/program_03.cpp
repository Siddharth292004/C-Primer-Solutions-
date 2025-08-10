//  Function to find the largest of three numbers

#include <iostream>
using namespace std;

int FindLargest(int a, int b, int c);
int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the thrid number: ";
    cin >> c;

    cout << "\nThe largest number is " << FindLargest(a, b, c);
    return 0;
}

int FindLargest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
