#include <iostream>

using namespace std;

int main() {
    int s, e, cnt = 0;
    cin >> s >> e;

    for(int cur = s; cur <= e; cur++) {
        int div_sum = 0;
        for(int div = 1; div <= cur - 1; div++) {
            if(cur % div == 0) {
                div_sum += div;
            }
        }
        if(div_sum == cur) {
            cnt++;
        }

    }
    cout << cnt;
    return 0;
}