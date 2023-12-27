#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 2000
#define HALF_N 1000

int n, arr[MAX_N], sum_arr[HALF_N];

int main() {
    cin >> n;

    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 2 * n);
    
    for(int i = 0; i < n; i++) {
        int sum_v = arr[i] + arr[(2 * n) - i - 1];
        sum_arr[i] = sum_v;
    }

    sort(sum_arr, sum_arr + n);
    cout << sum_arr[n - 1];
    return 0;
}