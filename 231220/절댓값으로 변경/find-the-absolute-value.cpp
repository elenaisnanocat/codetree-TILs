#include <iostream>

using namespace std;

int arr[100];
int n;

void Change(int *arr) {
    for(int i = 0; i < n; i++) {
       if(arr[i] < 0) {
        arr[i] *= -1;
       } 
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Change(arr);
    for(int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}