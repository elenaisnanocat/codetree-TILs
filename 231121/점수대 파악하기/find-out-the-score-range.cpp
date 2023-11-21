#include <iostream>

using namespace std;

int main() {
    int arr[100] = {}, cnt_arr[11] = {}, num = 0;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        num = i;
        if(arr[i] == 0) break;
    }

    for(int k = 0; k < num; k++) {
        cnt_arr[arr[k] / 10]++;
    }

    for(int j = 10; j > 0; j--) {
        cout << j << 0 << " - " <<cnt_arr[j] << "\n";
    }


    return 0;
}