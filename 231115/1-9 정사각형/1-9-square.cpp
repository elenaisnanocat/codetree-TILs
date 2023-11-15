#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(cnt == 10) {
                cnt = 1;
            }
            if(cnt < 10) {
                cout << cnt;
                cnt++;   
            }         
        }
        cout << "\n";
    }
    return 0;
}