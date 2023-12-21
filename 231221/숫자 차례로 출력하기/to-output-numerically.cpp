#include <iostream>

using namespace std;

int n;

void StoE(int n) {
    if(n == 0) return;

    StoE(n - 1);
    cout << n << " ";
}

void EtoS(int n) {
    if(n == 0) return;

    cout << n << " ";
    EtoS(n - 1);
}

int main() {
    cin >> n;

    StoE(n); 
    cout << "\n";
    EtoS(n);
    return 0;
}