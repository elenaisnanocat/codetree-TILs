#include <iostream>

using namespace std;

int main() {
    int n, m, cnt = 0, arr[100] = {};

    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == m) cnt++;
    }

    cout << cnt;

    return 0;
}