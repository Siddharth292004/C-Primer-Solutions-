#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v_01;
    vector<int> v_02(5);
    vector<int> v_03(5,10);

    v_01.push_back(10);
    v_01.push_back(20);
    v_01.push_back(30);
    v_01.push_back(40);
    v_01.push_back(50);

    for(int i = 0; i < v_01.size(); i++)
    {
        cout << v_01[i] << " ";
    }

    v_01.pop_back();
    v_01.pop_back();

    cout << "Size of the array: " << v_01.size() << endl;
    cout << "Capacity of the array:" << v_01.capacity() << endl;
   
    return 0;
}