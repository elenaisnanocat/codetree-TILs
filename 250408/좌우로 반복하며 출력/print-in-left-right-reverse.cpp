#include <iostream>
using namespace std;

int arr[10][10];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int cnt = 1;
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                arr[i][j] = cnt;
                cnt++; 
            }
        }
        else {
            for(int j = n - 1; j >= 0; j--) {
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