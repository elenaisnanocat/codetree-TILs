#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

#define MAX_N 1003

int n;
int cir[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> cir[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sum_dist = 0;
        for (int j = 0; j < n; j++) {
            int dist = (j + n - i) % n;
            sum_dist += dist * cir[j];
        }
        ans = min(ans, sum_dist);
    }
    cout << ans;

    return 0;
}