#include <iostream>
#include <cctype>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) {
            char ans = s[i];
            cout << (char)toupper(ans);
        }
    }
    return 0;
}