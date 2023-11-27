#include <iostream>

using namespace std;

int n, m;
int ans[100][100] = {};
int cnt = 1;

int main() {
    cin >> n >> m;

    for(int r = 0; r < n; r++) {
        for(int c = 0; c < m; c++) {
            if(ans[r][c] == 0) {
                int cur_r = r;
                int cur_c = c;

                while(cur_c >= 0 && cur_r < n) {
                    ans[cur_r][cur_c] = cnt;

                    //대각선 좌측 아래로 이동
                    cur_r++;
                    cur_c--;
                    cnt++;
                }
            }
        }
    }

    for(int r = 0; r < n; r++) {
        for(int c = 0; c < m; c++) {
            cout << ans[r][c] << " ";
        }
        cout << "\n";
    }

    

    return 0;
}