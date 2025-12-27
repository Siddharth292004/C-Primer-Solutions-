#include <iostream>
using namespace std;

int main(){
    int row;
    int column;

    cout << "Enter the row size : ";
    cin >> row;
    cout << "Enter the column size : ";
    cin >> column;

    int arr[row][column];

    cout << "Enter the " << (row * column) << " element in the array: "<< endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Print all value of the array : " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column ; j++){
              cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}