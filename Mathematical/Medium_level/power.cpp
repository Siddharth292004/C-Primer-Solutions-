#include <iostream>
using namespace std;

int main(){
    
    int num, power;
    int result = 1;

    cout << "Enter the digit: ";
    cin >> num;

    cout << "Enter the power: ";
    cin >> power;

    for(int i = 1; i <= power; i++){
        result = result * num;
    }

    cout << "Result: " << result << endl;

    return 0;
}
