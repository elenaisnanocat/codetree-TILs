#include <iostream>

using namespace std;

void ChangeN(int &n, int &m) {
    if(n > m) {
        n *= 2;
        m += 10;
    }
    else {
        m *= 2;
        n += 10;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    ChangeN(a, b);
    cout << a << " " << b;
    return 0;
}