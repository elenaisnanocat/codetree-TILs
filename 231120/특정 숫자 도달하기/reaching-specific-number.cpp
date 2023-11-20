#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int sum = 0, cnt = 0;

    for(int t = 0; t < 10; t++) {
        cin >> arr[t];
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] >= 250) break;
        sum += arr[i];
        cnt++;
    }

    double avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}