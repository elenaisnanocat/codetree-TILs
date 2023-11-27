#include <iostream>

using namespace std;

int main() {
    int n, arr[1000] = {}, cnt_arr[1001] = {}, max_v = -1;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) cnt_arr[arr[i]]++;

    for(int j = 1000; j >= 0; j--) {
        if(cnt_arr[j] == 1) {
            max_v = j;
            break;
        }
    }
    cout << max_v;

    return 0;
}