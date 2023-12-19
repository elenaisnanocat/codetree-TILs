#include <iostream>

using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool SumEven(int m) {
    if(m == 100) return false;
    int sum = m / 10 + m % 10;
    if(sum % 2 == 0) 
        return true;
    else return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(isPrime(i) && SumEven(i)) cnt++;
    }
    cout << cnt;
    return 0;
}