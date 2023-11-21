#include <iostream>

using namespace std;

int main() {
    int T, cnt = 0;
    int arr[4];

    cin >> T;
    for(int t = 0; t < T; t++){
        int sum_v = 0;

        for(int i = 0; i < 4; i++) {
            cin >> arr[t];
            sum_v += arr[t];    
        }
        
        double avg = (double) sum_v / 4;
        if(avg >= 60) {
            cout << "pass" << "\n";
            cnt++;
        }
        else {
            cout << "fail" << "\n";
        }
    }
    cout << cnt;

    return 0;
}