// input a string and return the number of times the neighbouring charcters are different from each other.

// string str = "a b b c d e f f g h h"
// count = 0;


#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;

    cout << "Enter the string: ";
    getline(cin,s);
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            break;
        }

        if (n == 2 && s[0] != s[1])
        {
            count++;
            break;
        }

        if (i == 0)
        {
            if (s[i] != s[i + 1])
                count++;
        }

        else if (i == n - 1)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }

        else if (s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            count++;
        }

    }

    cout << count << endl;

        return 0;
}