#include <iostream>

#define MAX_N 100
#define MAX_M 100

using namespace std;

int n, m;
int r, c, dir;

int dr[4] = {0, 1, 0, -1}; //e s w n
int dc[4] = {1, 0, -1, 0};

int arr[MAX_N][MAX_M];

bool IsRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;

    arr[r][c] = 1;

    for(int i = 2; i <= n * m; i++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(!IsRange(nr, nc) || arr[nr][nc] != 0) {
            dir = (dir + 1 ) % 4;
        }
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