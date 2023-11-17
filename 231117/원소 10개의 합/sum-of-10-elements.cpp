#include <iostream>

using namespace std;

int main() {
    
    int arr[10];
    int sum_v = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum_v += arr[i];
    }
    cout << sum_v;
    return 0;
}