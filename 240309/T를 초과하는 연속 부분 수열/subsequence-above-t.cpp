#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, t, cnt = 0, ans = 0;
int arr[MAX_N];

int main() {
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i >= 1 && arr[i] > arr[i - 1] && arr[i] > t){
        cnt++;
        ans = max(cnt, ans);
        }
        else cnt = 0;
    }

    cout << ans;
    return 0;
}