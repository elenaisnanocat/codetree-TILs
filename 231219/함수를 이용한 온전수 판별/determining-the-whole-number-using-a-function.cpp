#include <iostream>

using namespace std;

bool isOn(int n) {
    if(n % 2 == 0)
        return false;
    if(n != 100 && n % 10 == 5)
        return false;
    if(n % 3 == 0 && n % 9 != 0)
        return false;
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(isOn(i)) cnt++;
    }
    cout << cnt;

    return 0;
}