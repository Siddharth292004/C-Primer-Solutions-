#include<iostream>
#include <string>
using namespace std;

int main(){
    string s ;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin,s);

    if(!s.empty()){
        count = 1;
    }

    for(int i = 0; i <s.length(); i++){
        if(s[i] == ' '){
            count++;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}