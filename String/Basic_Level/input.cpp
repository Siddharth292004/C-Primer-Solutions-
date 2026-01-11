#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    string name1;

    // this type of method take only one word
    cout << "Enter your name: ";
    cin >> name;


    cout << "Name : " << name << endl;

  
    // this type of method take full sentense 
    cout <<"Enter the name: ";
    getline(cin,name1);

    cout <<"Name: "<< name1 << endl;

    return 0;

}