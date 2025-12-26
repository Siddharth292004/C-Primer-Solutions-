#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the " << n << " element in the array: " << endl;
    for(int i = 0; i < v.size(); i++ ){
        cin >> v[i];
    }

    for(int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}