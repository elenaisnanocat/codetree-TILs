#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a == 11 && b == 11 && c < 10) {
        cout << -1;
    }
    else if(a == 11 && b < 11) cout << -1;
    else if(a == 11 && b == 11 && c == 11) cout << 0;
    else cout << (a - 11) * 24 * 60 + (b - 11) * 60 + c - 11;

    return 0;
}