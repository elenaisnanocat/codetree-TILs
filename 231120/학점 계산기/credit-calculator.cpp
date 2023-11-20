#include <iostream>

using namespace std;

int main() {
    int n;
    double sum_v = 0;
    double arr[5] = {};
    cin>> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum_v += arr[i];
    }

    double avg = (double) sum_v / n;

    cout << fixed;
    cout.precision(1);
    cout << avg << "\n";

    if(avg >= 4.0) {
        cout << "Perfect";
    }
    else if(avg >= 3.0) {
        cout << "Good";
    }
    else cout << "Poor";
    return 0;
}