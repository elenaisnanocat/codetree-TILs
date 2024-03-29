#include <iostream>

#define MAX_R 200
#define OFFSET 100

using namespace std;

int n, x, y, xx, yy;
int arr[MAX_R + 1][MAX_R + 1];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;
        xx = x + 8;
        yy = y + 8;

        for(int j = x; j < xx; j++) {
            for(int k = y; k < yy; k++) {
                arr[j][k] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}