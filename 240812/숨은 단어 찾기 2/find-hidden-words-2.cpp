#include <iostream>
#include <algorithm>
#include <string>

#define MAX_N 100

using namespace std;

int n, m;
string arr[MAX_N];

bool InRange(int nx, int ny) {
    return 0 <= nx && nx < n && 0 <= ny && ny < m;
}

int dr[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dc[8] = {-1, 0, 1, 1, -1, -1, 0, 1};

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] != 'L') continue;

            for(int k = 0; k < 8; k++) {
                int cur_cnt = 1;
                int curr = i;
                int curc = j;
                while(true) {
                    int nr = curr + dr[k];
                    int nc = curc + dc[k];
                    if(!InRange(nr, nc) || arr[nr][nc] != 'E') break;
                    cur_cnt++;
                    curr = nr;
                    curc = nc;
                }
                if(cur_cnt >= 3) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}