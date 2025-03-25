#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int dou[n] = {0};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dou[i] = arr[i] * arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << dou[i] << " ";
    }

    return 0;
}