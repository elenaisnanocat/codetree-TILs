#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    char c = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j < i) cout << "  ";
            else {
                cout << c << " ";
                c++;
                if(c > 'Z') c = 'A';
            }
        }
        cout << "\n";
    }
    return 0;
}