#include <iostream>
#include <algorithm>

#define MAX_N 1000
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(i >= 1 && arr[i] * arr[i - 1] > 0) cnt++;
        else cnt = 1;

        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}