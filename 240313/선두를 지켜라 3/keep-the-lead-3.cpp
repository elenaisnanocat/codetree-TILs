#include <iostream>

#define MAX_D 1000000

using namespace std;

int n, m;
int pos_a[MAX_D + 1], pos_b[MAX_D + 1];

int main() {
    cin >> n >> m;

    int time_a = 1;
    for(int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;
        while(t--) {
            pos_a[time_a] = pos_a[time_a - 1] + v;
            time_a++;
        }
    }

    int time_b = 1;
    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;
        while(t--) {
            pos_b[time_b] = pos_b[time_b - 1] + v;
            time_b++;
        }
    }
    int ans = 0, leader = 0;
    for(int cur = 1; cur < time_a; cur++) {
        if(pos_a[cur] > pos_b[cur]) {
            if(leader == 2 || leader == 3) ans++;
            leader = 1;
        }
        else if(pos_a[cur] < pos_b[cur]) {
            if(leader == 1 || leader == 3) ans++;
            leader = 2;
        }
        else if(pos_a[cur] == pos_b[cur]) {
            if(leader == 1 || leader == 2) ans++;
            leader = 3;
        }
    }    
    cout << ans;

    return 0;
}