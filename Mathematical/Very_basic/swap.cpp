#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "a : " << a << "\nb : " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "\na : " << a  << "\nb : " << b << endl;

    return 0;
}