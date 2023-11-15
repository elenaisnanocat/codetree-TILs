#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;

    for(int i = 0; i < n; i++){
        int flag = cnt;
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) {
                cout << cnt << " ";
                cnt++;
            }
            else {
                cout << flag + n - 1 << " ";
                cnt++;
                flag--;
            }
        }
        cout << "\n";
    }
    return 0;
}