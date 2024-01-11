#include <iostream>

#define MAX_N 10
#define MAX_R 200
#define OFFSET 100

using namespace std;

int n;
int x1[MAX_R + 1], y1[MAX_R + 1], x2[MAX_R + 1], y2[MAX_R + 1]; 
int chk[MAX_R + 1][MAX_R + 1];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;

        for(int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                //R 1
                if(i % 2 == 0) {
                    chk[x][y] = 1;
                }
                //B 2
                else chk[x][y] = 2;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(chk[i][j] == 2) cnt++;
        }
    }
    cout << cnt;

    return 0;
}