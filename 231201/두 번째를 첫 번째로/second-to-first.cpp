#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[1]) {
            cout << s[0];
        }
        else {
            cout << s[i];
        }
    }
    return 0;
}