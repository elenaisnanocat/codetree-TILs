#include <iostream>

using namespace std;

int n;

int Fact(int n) {
    if(n == 0) return 1;

    return Fact(n - 1) * n;
}

int main() {
    cin >> n;

    cout << Fact(n);
    return 0;
}