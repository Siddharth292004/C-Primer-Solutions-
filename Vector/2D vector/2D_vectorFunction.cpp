#include <iostream>
#include <vector>
using namespace std;

void change1D(int arr[][8]){
    arr[0][0] = 1000;
}
void change2D(int arr[3][4]){
    arr[0][0] = 100;
}

int main(){

    int arr1[][8] = {1,2,3,4,5,6,7,8};
    cout << arr1[0][0] << " " <<arr1[0][1]<< endl;
    change1D(arr1);
    cout << arr1[0][0] << " " << arr1[0][1]<< endl;
    int arr[3][4] = { {10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {100, 110, 120, 130} };

    
    cout << arr[0][0];
    change2D(arr);
    cout <<" " << arr[0][0];


    

    return 0;
}