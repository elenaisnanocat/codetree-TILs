#include <iostream>

using namespace std;

void Rec(int r, int c) {
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
            cout << 1;
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    Rec(n, m);

    return 0;
}