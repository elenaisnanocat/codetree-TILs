#include <iostream>

using namespace std;

int main() {
    int n, arr[100] = {}, ans[100] = {}, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            ans[cnt++] = arr[i];
        }
    }

    for(int i = 0; i < cnt; i++) {
        cout << ans[i] << " ";
    }


    return 0;
}