#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, count = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

  
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

  
    if (sum == num)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
}
