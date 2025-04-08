#include <iostream>
using namespace std;

int arr[10][10];
int n;

int main() {
    cin >> n;

    for(int j = 0; j < n; j++) {
        int cnt = 1;
        if(j % 2 == 0) {
            for(int i = 0; i < n; i++) {
                arr[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for(int i = n - 1; i >= 0; i--) {
                arr[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }


    return 0;
}