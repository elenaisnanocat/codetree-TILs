#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, t;
int arr[MAX_N];

int main() {
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(i >= 1 && arr[i] > arr[i - 1] && arr[i - 1] > t) cnt++;
        else cnt = 1;
        ans = max(cnt, ans);
    }
    cout << ans;
    return 0;
}