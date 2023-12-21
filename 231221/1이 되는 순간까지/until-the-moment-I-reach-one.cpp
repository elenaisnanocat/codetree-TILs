#include <iostream>

using namespace std;

int n, cnt;

int Func(int n) {
    if(n == 1) return cnt;

    if(n % 2 == 0) {
        cnt++;
        return Func(n / 2);
        
    }
    else {
        cnt++;
        return Func(n / 3);     
    }
}

int main() {
    cin >> n;

    Func(n);
    cout << cnt;

    return 0;
}