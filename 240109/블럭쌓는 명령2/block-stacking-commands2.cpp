#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
int arr[MAX_N + 1];

int main() {
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }
    // for(int i = 0; i < MAX_N; i++) {
    //     cout << arr[i];
    // }

    int max_v = *max_element(begin(arr), end(arr));
    cout << max_v;
    return 0;
}