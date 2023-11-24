#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, arr[100] = {};
    cin >> n;
    int min_v = INT_MAX; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < min_v) {
            min_v = arr[i];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(min_v == arr[i]) cnt++;
    }

    cout << min_v << " " << cnt;
    return 0;
}