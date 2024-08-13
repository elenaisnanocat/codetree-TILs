#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
int arr[MAX_N];

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = 0;
    for(int i = 0; i <= n - k; i++) {
        int total_val = 0;
        for(int j = i; j < i + k; j++) {
            total_val += arr[j];
        }
        max_sum = max(total_val, max_sum);
    }
    cout << max_sum;
    return 0;
}