#include <iostream>

using namespace std;

int n;

int Seq(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    return Seq(n / 3) + Seq(n - 1);
}

int main() {
    cin >> n;

    cout << Seq(n);
    
    return 0;
}