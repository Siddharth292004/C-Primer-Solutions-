#include <iostream>
#include <vector>
using namespace std;

void change(int arr[][5]) {
    cout << arr[2][1]<< " ";
    cout << arr[2][3]<< " ";
    cout << arr[2][4]<< " ";
}

int main(){

    int arr[3][5] = {
        {10, 20, 30, 40, 0},
        {50, 60, 70, 80, 0},
        {100, 110, 120, 130, 140}
    };

    cout << arr[0][0]<< " ";
    cout << arr[1][1] << " ";
    change(arr);

    return 0;
}