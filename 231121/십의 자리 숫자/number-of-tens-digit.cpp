#include <iostream>

using namespace std;

int main() {
    int arr[100] = {}, num = 0, cnt_arr[10] = {};

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        num = i;
        if(arr[i] == 0) break;
    }

    for(int i = 0; i < num; i++) {
        cnt_arr[arr[i] / 10]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << i << " - " << cnt_arr[i] << "\n";
    }
    return 0;
}