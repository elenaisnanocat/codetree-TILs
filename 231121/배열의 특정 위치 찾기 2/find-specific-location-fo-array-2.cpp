#include <iostream>

using namespace std;

int main() {
    int arr[10], suma = 0, sumb = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(i % 2 == 0) {
            suma += arr[i];
        }
        else {
            sumb += arr[i];
        }
    }

    if(suma >= sumb) {
        cout << suma - sumb;
    }
    else {
        cout << sumb - suma;
    }
    return 0;
}