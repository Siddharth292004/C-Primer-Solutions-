#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "Siddharth";

    // length function
    cout << s.length()<< endl;

    // access char
    cout << s[0] << endl;
    cout << s[1] << endl;

    // substr function
    cout << s.substr(0,4) <<endl;
    cout << s.substr(2,5) << endl;

    cout << s.find('d') << endl;
}