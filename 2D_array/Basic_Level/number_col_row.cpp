#include <iostream>
using namespace std;

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = sizeof(a) / sizeof(a[0]);
    int columns = sizeof(a[0]) / sizeof(a[0][0]);

    cout << "Number of rows = " << rows << endl;
    cout << "Number of columns = " << columns << endl;

    return 0;
}

