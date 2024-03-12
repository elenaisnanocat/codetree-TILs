#include <iostream>

#define MAX_T 1000000

using namespace std;

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    cin >> n >> m;

    int cur_a = 1;
    for(int i = 0; i < n; i++) {
        int va, ta;
        cin >> va >> ta;

        while(ta--) {
            pos_a[cur_a] = pos_a[cur_a - 1] + va;
            cur_a++;
        }
    }

    int cur_b = 1;
    for(int i = 0; i <m; i++) {
        int vb, tb;
        cin >> vb >> tb;

        while(tb--) {
            pos_b[cur_b] = pos_b[cur_b - 1] + vb;
            cur_b++;
        }
    }
    int leader = 0, ans = 0;
    for(int cur = 1; cur < cur_a; cur++) {
        if(pos_a[cur] > pos_b[cur]) {
            if(leader == 2) ans++;
            leader = 1;
        }
        else if(pos_a[cur] < pos_b[cur]) {
            if(leader == 1) ans++;
            leader = 2;
        }
    }
    cout << ans;

    return 0;
}