#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int flag = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= flag; j++) {
            cout << i << " * " << j << " = " << i * j << " ";
            if(j != (n - i + 1)) cout << "/ ";
        }
        cout << "\n";
        flag--;
    }
    return 0;
}