#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int row; 
    int column; 
    cout << "Enter the row size:  ";
    cin >> row;
    cout << "Enter the column size: ";
    cin >> column;
    
    int arr[row][column];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
          cin >> arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column ; j++){
            sum += arr[i][j];
        }
    }
    
    cout << "Sum of the array : " << sum  << endl;

    return 0;
}