#include <iostream>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n, m, r, c, dir;
int arr[MAX_N][MAX_N];

int dr[DIR_NUM] = {1, 0, -1, 0};
int dc[DIR_NUM] = {0, 1, 0, -1};

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < m;
}

int main() {
    cin >> n >> m;

    arr[0][0] = 1;
    for(int num = 2; num <= n * m; num++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!InRange(nr,nc) || arr[nr][nc] != 0) {
            dir = (dir + 1) % 4;
        }
        r = r + dr[dir];
        c = c + dc[dir];
        arr[r][c] = num;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}