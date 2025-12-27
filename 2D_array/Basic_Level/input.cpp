// 2️⃣ Input elements in a 2D array and display them.

#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;
    
    cout << "Enter the size of the row: ";
    cin >> row ;
    cout << "Enter the size of the column: "; 
    cin >> column;

    int arr[row][column];

    cout << "Enter the " <<(row * column) << " element in the array: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >>  arr[i][j];
        }
    }

    cout << "Print all the element of the array: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}