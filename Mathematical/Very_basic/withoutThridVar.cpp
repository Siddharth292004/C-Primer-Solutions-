#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter the first number: ";
    cin >>a;
    cout << "Enter the second number : ";
    cin >> b;

    cout << "a: "<< a <<"\nb: "<< b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a: " << a << "\nb: "<< b << endl;

    return 0;
}