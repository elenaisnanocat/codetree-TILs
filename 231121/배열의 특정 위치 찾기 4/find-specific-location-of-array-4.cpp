#include <iostream>

using namespace std;

int main() {
    int arr[10] = {};
    int cnt = 0, sum_v = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) break;
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] != 0 && arr[i] % 2 == 0) {
            cnt++;
            sum_v += arr[i];
        }
    }
    cout << cnt << " " << sum_v;


    return 0;
}