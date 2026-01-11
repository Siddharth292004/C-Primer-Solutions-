#include <iostream>
#include <string>
#include <sstream>   // for stringstream
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;

    // Extract words one by one
    while (ss >> word) {
        count++;
    }

    cout << "Number of words: " << count << endl;
    return 0;
}
