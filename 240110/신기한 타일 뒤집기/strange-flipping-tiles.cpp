#include <iostream>

#define MAX_N 1000
#define MAX_R 200000

using namespace std;

int n, w, b;
int arr[MAX_R + 1], chk_w[MAX_R + 1], chk_b[MAX_R + 1];

int main() {
    cin >> n;
    int cur = MAX_R / 2;

    for(int i = 0; i < n; i++) {
        int dis;
        char dir;
        cin >> dis >> dir;

        if(dir == 'L') {
            while(dis--) {
                arr[cur] = 1;
                chk_w[cur]++;
                if(dis) cur--;
            }
        }
        else {
            while(dis--) {
                arr[cur] = 2;
                chk_b[cur]++;
                if(dis) cur++;
            }
        }
    }
    for(int i = 0; i <= MAX_R; i++) {
        if(arr[i] == 1) w++;
        else if(arr[i] == 2) b++;
    }
    cout << w << " " << b;
    return 0;
}