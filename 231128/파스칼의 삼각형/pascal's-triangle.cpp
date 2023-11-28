#include <iostream>

using namespace std;

int n;
int arr[15][15] = {};

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i >= j) {
                arr[i][0] = 1;
                if(i == j) {
                    arr[i][j] = 1;
                }
            } 
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != 0)
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}