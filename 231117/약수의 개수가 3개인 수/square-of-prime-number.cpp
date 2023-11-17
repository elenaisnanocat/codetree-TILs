#include <iostream>

using namespace std;

int main() {
    int s, e, ans = 0;

    cin >> s >> e;

    for(int cur = s; cur <= e; cur++) {
        int div_cnt = 0;
        
        for(int div = 1; div <= cur - 1; div++) {
            if(cur % div == 0) {
                div_cnt++;
            }
        }
        if(div_cnt == 3) ans++;
    }
    cout << ans;
    return 0;
}