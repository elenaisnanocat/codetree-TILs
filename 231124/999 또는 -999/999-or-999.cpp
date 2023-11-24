#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[100] = {}, min_v = INT_MAX, max_v = INT_MIN;

    int num = 0;
    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        num = i;
        if(arr[i] == 999 || arr[i] == -999) break;

        if(arr[i] > max_v) {
            max_v = arr[i];
        }
        if(arr[i] < min_v) {
            min_v = arr[i];
        }

    }
    cout << max_v << " " << min_v;

    return 0;
}