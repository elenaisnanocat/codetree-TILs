#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for(int t = 0; t < T; t++) {
        int a, b;
        cin >> a >> b;

        int sum_v = 0;
        for(int i = a; i <= b; i++) {
            if(i % 2 == 0) sum_v += i;
        }
        cout << sum_v << "\n";
    }
    return 0;
}