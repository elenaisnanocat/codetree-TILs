#include <iostream>

using namespace std;

int main() {
    int n, arr[100], cnt_arr[10] = {};
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt_arr[arr[i]]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << cnt_arr[i] << "\n";
    }
    return 0;
}