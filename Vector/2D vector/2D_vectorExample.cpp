#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    vector<int> v2;
    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(70);
    v2.push_back(80);

    vector<int> v3;
    v3.push_back(100);
    v3.push_back(110);
    v3.push_back(120);
    v3.push_back(130);
    v3.push_back(140);

 vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout << v[0][0]<< " ";
    cout << v[1][1] << " ";
    cout << v[2][1]<< " ";
    cout << v[2][3]<< " ";
    cout << v[2][4]<< " ";
    
       return 0;
}