#include<iostream>
#include <string>
using namespace std;

int Vowel_Count(string s){
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] =='e' || s[i]== 'i' || s[i] =='o'|| s[i] =='u'){
            count++;
        }
        if(s[i] == 'A' || s[i] =='E' || s[i] == 'I' || s[i] =='O'|| s[i] =='U'){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    
    cout << "Enter a string: ";
    getline(cin,s);

   cout <<"Number of Vowel : " << Vowel_Count(s);

   return 0;
}