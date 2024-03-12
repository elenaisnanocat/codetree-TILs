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
                pos_b[time_b] = pos_b[time_b] + 1;
            }
            else pos_b[time_b] = pos_b[time_b] - 1;
            time_b++;
        }
    }
    
    int ans = 0;
    if(time_a >= time_b) {

        for(int i = 1; i <= time_a; i++) {
            if((pos_a[i - 1] != pos_b[i - 1]) && (pos_a[i] == pos_b[i])) {
                ans++;
            }
        }
    }
    else {
        for(int i = 1; i <= time_b; i++) {
            if((pos_a[i - 1] != pos_b[i - 1]) && (pos_a[i] == pos_b[i])) {
                ans++;
            }
        }
    }
    cout << ans;


    return 0;
}