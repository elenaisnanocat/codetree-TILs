#include <iostream>

#define MAX_N 100

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
int arr[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y < n);
}

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int total = 0;
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            
            int cnt = 0;
            for(int dir = 0; dir < 4; dir++) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if(InRange(nx, ny) && arr[nx][ny] == 1) {
                    cnt++;
                }
            }

            if(cnt >= 3) {
                total++;
            }
        }
    }
    cout << total;



    return 0;
}