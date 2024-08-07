#include <iostream>
#include <algorithm>

#define MAX_N 20

using namespace std;

int n;
int map[MAX_N][MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    int max_cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            max_cnt = max(max_cnt, map[i][j] + map[i][j + 1] + map[i][j + 2]);
        }
    }

    cout << max_cnt;

}