#include <iostream>

using namespace std;

int cnt;

int main() {
    int n;
    cin >> n;
    
    cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}