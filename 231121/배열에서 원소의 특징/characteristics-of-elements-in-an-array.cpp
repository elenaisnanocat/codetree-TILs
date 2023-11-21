#include <iostream>

using namespace std;

int main() {
    int arr[10], t = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] % 3 == 0) {
            t = i;
            break;
        }
    }
    cout << arr[t - 1];

    return 0;
}