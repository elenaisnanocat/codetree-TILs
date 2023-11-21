#include <iostream>

using namespace std;

int main() {
    int arr[100], num = 0;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        num = i;
        if(arr[i] == 0) break;
    }

    for(int i = 0; i < num; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] / 2 << " ";
        }
        else {
            cout << arr[i] + 3 << " ";
        }
    }
    return 0;
}