#include <iostream>

using namespace std;

int main() {
    int arr[10], sumtw = 0, cnttw = 0, sumth = 0, cnttr = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if((i + 1) % 2 == 0) {
            sumtw += arr[i];
            cnttw++;
        }
        if((i + 1) % 3 == 0) {
            sumth += arr[i];
            cnttr++;
        }
    }

    double avgth = (double) sumth / cnttr;

    cout << fixed;
    cout.precision(1);
    cout << sumtw << " " << avgth;
    return 0;
}