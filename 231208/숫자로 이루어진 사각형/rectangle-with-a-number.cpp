#include <iostream>

using namespace std;

void Squ(int n) {
    int num = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(num == 9) num = 0;
            num++;
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    Squ(n);

    return 0;
}