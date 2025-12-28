#include <iostream>
using namespace std;

int main(){

    int row;
    int column;

    cout << "Enter the row size: ";
    cin >> row;
    cout << "Enter the column size: ";
    cin >> column;

    int arr[row][column];
    cout << "Enter the " << (row * column) << " element the array : "<< endl;
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < column;j++){
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];

    for(int i = 0; i < row ; i++){
        for(int j = 0; j <column; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }

    cout << "Maximum : " << max << endl;
    cout << "Minimum : " << min << endl;

    return 0;
}