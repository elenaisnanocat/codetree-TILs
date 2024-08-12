#include <iostream>
#include <algorithm>

#define DIR_NUM 8

using namespace std;

int arr[19][19];

int dr[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dc[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

int InRange(int r, int c) {
    return 0 <= r && r < 19 && 0 <= c && c < 19;
}

int main() {
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) {
            if(arr[i][j] == 0) continue;
 
            for(int k = 0; k < DIR_NUM; k++) {
                int cnt = 1;
                int curx = i;
                int cury = j;
                while(true) {
                    int nx = curx + dr[k];
                    int ny = cury + dc[k];
                    if(InRange(nx, ny) == false || arr[nx][ny] != arr[i][j]) break;
                    cnt++;
                    curx = nx;
                    cury = ny;
                }
                if(cnt == 5) {
                    cout << arr[i][j] << endl;
                    cout << i + 2 * dr[k] + 1 << " " << j + 2 * dc[k] + 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;

    return 0;
}