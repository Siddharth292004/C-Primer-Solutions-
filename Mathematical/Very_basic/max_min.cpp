#include <iostream>
using namespace std;

int main(){

    int num1,num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 > num2){
        cout << num1 << " is a maximum number. " << endl;
    }
    else{
        cout << num2 << " is a maximum number." << endl;
    }

    return 0;
}