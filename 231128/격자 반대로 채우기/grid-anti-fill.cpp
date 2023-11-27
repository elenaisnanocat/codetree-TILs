#include <iostream>

using namespace std;

int n, cnt = 1;
int arr[10][10] = {};

int main() {
    cin >> n;

    for(int i = n - 1; i >= 0; i--) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++){
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else {
            for(int j = n - 1; j >= 0; j--) {
                arr[j][i] = cnt;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}