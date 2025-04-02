#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int a, b;
    for(int t = 0; t < T; t++) {
        cin >> a >> b;
        
        int total = 0;
        for(int i = a; i <= b; i++) {
            if(i % 2 == 0) {
                total += i;
            }
        }
        cout << total << "\n";
    }
    return 0;
}