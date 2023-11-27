#include <iostream>

using namespace std;

int main() {
    
    int arr[2][4] = {};
    int total_sum = 0;

    for(int i = 0; i < 2; i++) {
        int hori_sum = 0;
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            hori_sum += arr[i][j];
            total_sum += arr[i][j];
        }
        double hori_avg = (double) hori_sum / 4;
        cout << fixed;
        cout.precision(1);
        cout << hori_avg << " ";
    }
    cout << "\n";

    for(int i = 0; i < 4; i++) { //열
        int ver_sum = 0;
        for(int j = 0; j < 2; j++) { //행
            //cout << arr[j][i];
            ver_sum += arr[j][i];
        }
        double ver_avg = (double) ver_sum / 2;
        cout << ver_avg << " ";
    }
    cout << "\n";

    double total_avg = (double) total_sum / 8;
    cout << fixed;
    cout.precision(1);
    cout << total_avg;

    return 0;
}