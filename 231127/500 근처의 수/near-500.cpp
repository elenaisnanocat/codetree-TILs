#include <iostream>

using namespace std;

int main() {
    int arr[10] = {}, lower[11] = {}, upper[11] = {};

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] < 500) {
            lower[i] = arr[i];
        }
        else {
            upper[i] = arr[i];
        }
    }

    //500미만 중 가장 큰수
    int lmax = -1;
    for(int i = 0; i < 11; i++) {
        if(lower[i] > lmax) {
            lmax = lower[i];
        }
    }
    
    int umin = 1001;
    for(int i = 0; i < 11; i++) {
        if(upper[i] != 0 && upper[i] < umin) {
            umin = upper[i];
        }
    }
    cout << lmax << " " << umin;

    return 0;
}