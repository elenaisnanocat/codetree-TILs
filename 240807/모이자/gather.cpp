#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n;
int a[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sum_dist = 0;
        for(int j = 0; j < n; j++) {
            sum_dist += abs(j - i) * a[j];
        }
        ans = min(ans, sum_dist);
    }
    cout << ans;
    return 0;
}