#include <iostream>

using namespace std;

int isPow(int n, int m) {
    int res = 1;
    for(int i = 0; i < m; i++) {
        res = res * n;
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = isPow(a, b);
    cout << ans;
    return 0;
}