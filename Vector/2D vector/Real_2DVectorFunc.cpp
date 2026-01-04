#include<iostream>
#include <vector>
using namespace std;

void Change<vector<vector<int>>v{
    v[0][0] = 100;
}

int main(){
    vector<vector<int>>v;

    vector<int>v1,v2,v3;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(3);
    v1.push_back(40);

    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(70);
    v2.push_back(80);
    
    v3.push_back(90);
    v3.push_back(100);
    v3.push_back(110);
    v3.push_back(120);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout << v[0][0] << " ";
    cout << v.size();
    cout << v[0].size();


    return 0;
}