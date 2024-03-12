#include <iostream>

#define MAX_D 1000000

using namespace std;

int n, m;
int pos_a[MAX_D + 1], pos_b[MAX_D + 1];

int main() {
    cin >> n >> m;

    int time_a = 1;
    for(int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;
        while(t--) {
            if(d == 'R') {
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            }
            else pos_a[time_a] = pos_a[time_a - 1] - 1;
            time_a++;
        }
    }
    int time_b = 1;
    for(int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;
        while(t--) {
            if(d == 'R') {
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            }
            else pos_b[time_b] = pos_b[time_b - 1] - 1;
            time_b++;
        }
    }
    //먼저 끝난 로봇 위치 처리
    if(time_a < time_b) {
        for(int i = time_a; i < time_b; i++) {
            pos_a[i] = pos_a[i - 1];
        }
    }
    else if(time_a > time_b) {
        for(int i = time_b; i < time_a; i++) {
            pos_b[i] = pos_b[i - 1];
        }
    }
    
    int ans = 0, tmax = 0;
    if(time_a > time_b) tmax = time_a;
    else tmax = time_b;

    for(int i = 1; i < tmax; i++) {
        if(pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1]) ans++;
    }
    cout << ans;


    return 0;
}