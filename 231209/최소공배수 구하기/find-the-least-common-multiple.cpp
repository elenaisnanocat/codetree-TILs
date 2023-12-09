#include <iostream>

using namespace std;

int FGcd(int n, int m) {
    if(m == 0) return n;
    return FGcd(m, n % m);
}

int FLcm(int n, int m) {
    return n * m / FGcd(n, m);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << FLcm(n, m);
    return 0;
}