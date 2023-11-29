#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s, ans;

    for(int i = 0; i < n; i++) {
        cin >> s;
        ans += s;
    }
    cout << ans;
    return 0;
}