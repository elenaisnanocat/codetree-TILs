#include <iostream>

using namespace std;

int main() {
    int arr[10] = {}, cnt_arr[7] = {};

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        cnt_arr[arr[i]]++;
    }

    for(int i = 1; i < 7; i++) {
        cout << i << " - " << cnt_arr[i] << "\n";
    }


    return 0;
}