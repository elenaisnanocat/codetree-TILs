#include <iostream>

using namespace std;

int main() {
    int arr[100] = {};

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i <= n; i++) {
        if(arr[n - i] % 2 == 0 && arr[n - i] != 0) cout << arr[n - i] << " ";
    }
    return 0;
}