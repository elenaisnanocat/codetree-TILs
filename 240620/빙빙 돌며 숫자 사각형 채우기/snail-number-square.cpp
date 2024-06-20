#include <iostream>

#define MAX_NUM 100
#define DIR_NUM 4

using namespace std;

int n, m;
int arr[MAX_NUM][MAX_NUM];

int dr[MAX_NUM] = {0, 1, 0, -1};
int dc[MAX_NUM] = {1, 0, -1, 0};

int r, c, dir;

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

int main() {
    cin >> n >> m;

    arr[r][c] = 1;
    for(int i = 2; i <= n * m; i++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!InRange(nr, nc) || arr[nr][nc] != 0)
            dir = (dir + 1) % 4;

        r = r + dr[dir];
        c = c + dc[dir];
        arr[r][c] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}