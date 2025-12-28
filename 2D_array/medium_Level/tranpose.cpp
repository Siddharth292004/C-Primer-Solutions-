#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter the row size : ";
    cin >> row;

    cout << "Enter the column size : ";
    cin >> column;

    int arr_01[row][column];
    int arr_02[column][row];   

    cout << "Enter the " << (row * column) << " elements:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr_01[i][j];
        }
    }

    // Transpose logic
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            arr_02[j][i] = arr_01[i][j];
        }
    }

    cout << "Transpose of the array:\n";
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++) {
            cout << arr_02[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
