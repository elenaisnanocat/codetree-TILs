#include <iostream>
#include <algorithm>

#define MAX_N 201

using namespace std;

int arr[MAX_N];

int main() {
    int n, x1, x2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        x1 += 100;
        x2 += 100;
        for(int i = x1; i < x2; i++) {
            arr[i]++;
        }
    }
    int max_v = *max_element(begin(arr), end(arr));
    cout << max_v;
    return 0;
}