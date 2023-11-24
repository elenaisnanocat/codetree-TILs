#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[100] = {}, arr2[100] = {};

    for(int i = 0; i < n1; i++) cin >> arr1[i];
    for(int i = 0; i < n2; i++) cin >> arr2[i];

    for(int i = 0; i < n1; i++) {
        bool check = true;

        for(int j = 0; j < n2; j++) {
            if(i + j >= n1) {
                check = false;
                break;
            }

            if(arr1[i + j != arr2[j]]) {
                check = false;
                break;
            }
        }
        if(check) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}