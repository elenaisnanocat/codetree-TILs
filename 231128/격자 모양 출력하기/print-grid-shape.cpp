#include <iostream>

using namespace std;

int n, m;
int arr[10][10] = {};

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int cur_r = 0;
            int cur_c = 0;
            cin >> cur_r >> cur_c;
            arr[cur_r - 1][cur_c - 1] = cur_r * cur_c;
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