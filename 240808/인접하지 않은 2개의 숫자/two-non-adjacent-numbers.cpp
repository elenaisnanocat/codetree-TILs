#include <iostream>
#include <climits>
#include <algorithm>

#define MAX_N 100

using namespace std;

int arr[MAX_N];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 2; j < n; j++) {
            ans = max(ans, arr[i] + arr[j]);
        }
    }
    cout << ans;
    return 0;
}