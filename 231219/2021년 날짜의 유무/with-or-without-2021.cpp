#include <iostream>

using namespace std;

int LastDay(int m) {
    if(m == 2) return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

bool Judge(int m, int d) {
    if(m <= 12 && d <= LastDay(m))  return true;
    return false;
}

int main() {
    int m, d;
    cin >> m >> d;

    if(Judge(m, d)) cout << "Yes";
    else cout << "No";

    return 0;
}