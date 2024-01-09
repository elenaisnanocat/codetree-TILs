#include <iostream>
#include <algorithm>

#define MAX_N 105

using namespace std;

int n, x1, x2;
int arr[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for(int j = x1; j <= x2; j++) {
            arr[j]++;
        }

    }
    int max_v = *max_element(begin(arr), end(arr));
    cout << max_v;
    
    return 0;
}