#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, ans;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i+1]) {
            cnt++;
        }
        else {
            ans += s[i];
            cnt += 1;
            ans += to_string(cnt);
            cnt = 0;
        }
    }
    cout << ans.length() << "\n" << ans;
    return 0;
}