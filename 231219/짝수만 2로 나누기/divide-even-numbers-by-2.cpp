#include <iostream>

using namespace std;

int n;
int arr[51];

void Div(int *arr) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
    }
}

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Div(arr);

    for(int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}