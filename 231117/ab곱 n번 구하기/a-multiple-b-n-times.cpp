#include <iostream>

using namespace std;

int main() {
    int n, a, b;

    cin >> n;

    for(int t = 0; t < n; t++) {
        cin >> a >> b;
        int sum_v = 1;
        for(int i = a; i <=b; i++) {
            sum_v *= i;
        }
        cout << sum_v << "\n";
    }
    return 0;
}