#include <iostream>

using namespace std;

int main() {
    int arr[10] = {};
    int sum_v = 0, cnt = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) break;
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] != 0) {
            sum_v += arr[i];
            cnt++;
        }
    }

    cout << sum_v << " ";

    double avg = (double) sum_v / cnt;

    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}