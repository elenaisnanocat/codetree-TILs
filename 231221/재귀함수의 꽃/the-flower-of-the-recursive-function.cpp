#include <iostream>

using namespace std;

int n;

void PrintNum(int n) {
    if(n == 0) return;

    cout << n << " ";
    PrintNum(n - 1);
    cout << n << " ";
}

int main() {
    cin >> n;

    PrintNum(n);

    return 0;
}