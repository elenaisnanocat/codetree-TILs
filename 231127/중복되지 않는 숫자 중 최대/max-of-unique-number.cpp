#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, arr[1000] = {}, cnt_arr[1000] = {}, max_v = INT_MIN;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt_arr[arr[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(cnt_arr[i] == 1) {
            if(i > max_v) {
                max_v = i;
            }
        }
    }
    if(max_v != INT_MIN) {
        cout << max_v;
    }
    else {
        cout << -1;
    }

    return 0;
}