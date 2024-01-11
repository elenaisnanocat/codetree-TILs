#include <iostream>
#include <algorithm>

#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int x1[2], x2[2], y1[2], y2[2];
int chk[MAX_R + 1][MAX_R + 1];

int main() {
    for(int i = 0; i < 2; i++) {
        //1번 사각형 idx 0, 2번 사각형 idx 1
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;

        for(int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                // 1번 사각형 1 2번 사각형 2
                chk[x][y] = i + 1;
            }
        }
    }

    int minx = MAX_R, miny = MAX_R;
    int maxx = 0, maxy = 0;
    bool fir_exi = false;

    for(int x = 0; x <= MAX_R; x++) {
        for(int y = 0; y <= MAX_R; y++) {
            if(chk[x][y] == 1) {
                fir_exi = true;
                minx = min(x, minx);
                miny = min(y, miny);
                maxx = max(x, maxx);
                maxy = max(y, maxy);
            }
        }
    }

    int ans;
    if(fir_exi) ans = (maxx - minx + 1) * (maxy - miny + 1);
    else ans = 0;

    cout << ans;

    return 0;
}