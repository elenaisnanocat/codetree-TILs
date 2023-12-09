#include <iostream>
#include <algorithm>

using namespace std;

int FGcd(int n, int m) {
    if(m == 0) return n;
    return FGcd(m, n % m);
}

int main() {
    int n, m;
    cin >> n >> m;

    int ans = FGcd(n, m);
    cout << ans; 
    return 0;
}