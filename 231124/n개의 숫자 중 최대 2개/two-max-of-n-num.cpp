#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, arr[100] = {};
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    cout << arr[0] << " " << arr[1];
    return 0;
}