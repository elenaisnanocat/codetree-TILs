#include <iostream>

using namespace std;

int n;

int Cal(int n){
    if(n == 1) return 2;
    if(n == 2) return 4;

    return Cal(n - 1) * Cal(n - 2) % 100;
}

int main() {
    cin >> n;

    cout << Cal(n);
    return 0;
}