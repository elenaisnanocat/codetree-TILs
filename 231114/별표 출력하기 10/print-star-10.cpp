#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < 2 * n; i++) {
        if(i % 2 == 0) {
            for(int k = 0; k < 1 + i / 2; k++) cout << "* ";
        }
        else {
            for(int k = 0; k < n - (i - 1) / 2; k++) cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}