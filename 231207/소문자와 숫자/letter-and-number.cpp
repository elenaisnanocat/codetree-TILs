#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(isalpha(s[i]) || isdigit(s[i])) {
            if(isalpha(s[i])) {
                char c = tolower(s[i]);
                cout << c;
            }
            else cout << s[i];
        }
    }
    return 0;
}