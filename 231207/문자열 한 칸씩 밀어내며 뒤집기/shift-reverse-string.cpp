#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;

    int q;
    for(int i = 0; i < n; i++) {
        cin >> q;
        if(q == 1) {
            s = s.substr(1, s.size() - 1) + s.substr(0, 1);
            cout << s << "\n";
        }
        else if(q == 2) {
            s = s.substr(s.size() - 1, 1) + s.substr(0, s.size() - 1);
            cout << s << "\n";
        }
        else if(q == 3) {
            reverse(s.begin(), s.end());
            cout << s << "\n";
        }
    }
    return 0;
}