// Display n terms of natural number and their sum:                      
// ---------------------------------------                                
//  Input a number of terms: 7                                            
//  The natural numbers upto 7th terms are:                               
// 1 2 3 4 5 6 7                                                          
//  The sum of the natural numbers is: 28

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Display n terms of natural number and their sum:\n";
    cout << "-------------------------\n";
    cout << "Enter a number of terms :";
    cin >> n;  
    cout << "The natural number upto "<< n <<"th terms are:\n";
    
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "\nThe sum of the natural numbers is: " << sum << endl;
    cout << endl;

    return 0;
}