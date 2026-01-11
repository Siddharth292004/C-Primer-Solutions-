#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        // Check start of string OR character after space
        if (i == 0 || s[i - 1] == ' ') {
            // Capitalize only if it is a lowercase letter
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << "Result: " << s << endl;
    return 0;
}
