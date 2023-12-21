#include <iostream>

using namespace std;

int n, sum;

void SumV(int n) {
    if(n == 0) return;

    SumV(n - 1);
    sum += n;
}

int main() {
    cin >> n;

    SumV(n);
    cout << sum;
    return 0;
}