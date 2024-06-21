#include <iostream>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n, m, r, c, dir;

char arr[MAX_N][MAX_N];

int dr[DIR_NUM] = {0, 1, 0, -1};
int dc[DIR_NUM] = {1, 0, -1, 0};

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

int main() {
    cin >> n >> m;
    arr[0][0] = 'A';

    for(int num = 1; num < n * m; num++) {
        while(true) {
            char nr = r + dr[dir];
            char nc = c + dc[dir];

            if(InRange(nr, nc) && arr[nr][nc] == 0) {
                r = nr;
                c = nc;
                arr[r][c] =+ (char)(num % 26 + 'A');
                break;
            }
            else {
                dir = (dir + 1) % 4;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}