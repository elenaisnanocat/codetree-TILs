#include <iostream>
using namespace std;

int arr1[3][3];
int arr2[3][3];
int res[3][3];

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            res[i][j] = arr1[i][j] * arr2[i][j];
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}