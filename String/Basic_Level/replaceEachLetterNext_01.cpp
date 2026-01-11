#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    for(int i = 0; i <s.length(); i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                if(s[i] == 'z'){
                    s[i] = 'a';
                }
                else{
                    s[i] = s[i] + 1;
                }
            }
        }
        else if(isupper(s[i])){
            if(s[i] == 'Z'){
                s[i] = 'A';
            }
            else{
                s[i]= s[i]+1;
            }
        }
    }
    cout << "Result: " << s << endl;
    return 0;
}