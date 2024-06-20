#include <iostream>
#include <string>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n;
int arr[MAX_N][MAX_N];

int dr[DIR_NUM] = {0, 1, 0, -1};
int dc[DIR_NUM] = {1, 0, -1, 0}; //동남서북

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

int AdCnt(int r, int c) {
    int cnt = 0;
    for(int i = 0; i < DIR_NUM; i++) {
        int nr = r + dr[i], nc = c + dc[i];
        if(InRange(nr, nc) && arr[nr][nc] == 1)
            cnt++;
    }
    return cnt;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(AdCnt(i, j) >= 3) ans++;
    
    cout << ans;
    return 0;
}