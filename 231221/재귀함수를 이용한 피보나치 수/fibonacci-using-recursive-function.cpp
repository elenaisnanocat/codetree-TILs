#include <iostream>

using namespace std;

int n;

int Fibo(int n) {
    if(n == 1) return 1;
    if(n == 2) return 1;

    return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
    cin >> n;

    cout << Fibo(n);
    
    return 0;
}