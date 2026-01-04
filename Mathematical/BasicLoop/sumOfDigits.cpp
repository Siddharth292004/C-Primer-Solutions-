#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    
    cout << "Enter the number: ";
    cin >> num;

    while(num > 0)
    {
        int digits = num % 10;
        sum +=digits;
        num /= 10;
    }

     cout << "Sum of digits: " << sum << endl;

     return 0;
}