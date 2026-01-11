#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    for(int i = 0; i <s.length(); i++){

        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] == 'z'){
                s[i] = 'a';
            }
            else{
                s[i]= s[i] + 1;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] == 'Z'){
                s[i] = 'A';
            }
            else{
                s[i] = s[i] + 1;
            }
        }
    }
    cout << "Result: " << s << endl;
}