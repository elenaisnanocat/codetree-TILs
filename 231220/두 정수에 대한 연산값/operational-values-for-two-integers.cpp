#include <iostream>

using namespace std;

void Calculator(int &n, int &m) {
    if(n >= m) {
        n += 25;
        m *= 2;
    }
    else {
        m += 25;
        n *= 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    Calculator(a, b);
    cout << a << " " << b;

    return 0;
}