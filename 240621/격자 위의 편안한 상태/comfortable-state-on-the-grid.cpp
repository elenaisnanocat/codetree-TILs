#include <iostream>

#define DIR_NUM 4
#define MAX_N 100

using namespace std;


int n, m;
int arr[MAX_N][MAX_N];


int dr[DIR_NUM] = {-1, 0, 1, 0};
int dc[DIR_NUM] = {0, 1, 0, -1};

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

int AdCnt(int r, int c) {
    int cnt = 0;
    for(int d = 0; d < DIR_NUM; d++) {
        int nr = r + dr[d];
        int nc = c + dc[d];
        if(InRange(nr, nc) && arr[nr][nc] == 1)
            cnt++;
    }
    return cnt;
}


int main() {
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        r--;
        c--;
        arr[r][c] = 1;
        if(AdCnt(r, c) == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}