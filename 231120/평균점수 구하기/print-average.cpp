#include <iostream>

using namespace std;

int main() {
    double arr[8] = {};
    double sum_v = 0;

    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum_v += arr[i];
    }

    double avg = (double) sum_v / 8;

    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}