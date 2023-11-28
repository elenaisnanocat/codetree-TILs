#include <iostream>

using namespace std;

int n, m;
int arr[9][9] = {};

int main() {
    cin >> n >> m;

    for(int dot = 1; dot <= m; dot++){
        int cur_r = 0, cur_c = 0;
        cin >> cur_r >> cur_c;

        arr[cur_r - 1][cur_c - 1] = dot;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}