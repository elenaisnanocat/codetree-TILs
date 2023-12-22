#include <iostream>

using namespace std;

int n;

int Func(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    return Func(n - 2) + n;
}

int main() {
    cin >> n;

    cout << Func(n);
    return 0;
}