#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){

   string s = "helloWorld";
   string s1 = "helloWorld";
   sort(s.begin(),s.end());
   sort(s1.begin(),s1.end());

   if(s == s1){
    cout <<true;
   }
   else{
   cout << false;
   }
      
    return 0;
}