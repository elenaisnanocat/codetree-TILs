#include <iostream>

using namespace std;

int n, cnt;

int Count(int n) {
    if(n == 1) return cnt;

    if(n % 2 == 0) {
        cnt++;
        return Count(n / 2);
    }
    else {
        cnt++;
        return Count(3 * n + 1);
    }
    
}

int main() {
    cin >> n;

    cout << Count(n);

    return 0;
}