#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) ans += s[i] - '0';
    }
    cout << ans;
    return 0;
}