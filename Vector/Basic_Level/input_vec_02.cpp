#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int>v;
    cout << "Enter the " << n << " element in the vector: "<< endl;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "\nAll element of the vector: " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}