#include <iostream>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int dr[DIR_NUM] = {0, -1, 0, 1};
int dc[DIR_NUM] = {-1, 0, 1, 0};

int n, r, c, dir;

int arr[MAX_N][MAX_N];

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

int main() {
    cin >> n;
    
    int nr = n - 1;
    int nc = n - 1;

    for(int num = n * n; num > 0; num--) {
        arr[nr][nc] = num;
        
        for(int d = 0; d < 4; d++) {
            if(!InRange(nr + dr[dir], nc + dc[dir]) || arr[nr + dr[dir]][nc + dc[dir]] != 0) 
            dir = (dir + 1) % 4;
            else break;
        }
        nr += dr[dir];
        nc += dc[dir];    
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}