#include <iostream>

using namespace std;

int main() {
    int n, arr[1001] = {};
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int buy = arr[0], idx = 0;

    for(int i = 0; i < n; i++) {
        if(buy > arr[i]) {
            buy = arr[i];
            idx = i;
        }
    }
    //cout << buy;
    
    //판매
    int max_price = arr[idx];
    
    if((idx + 1) == n) {
        cout << 0;
    }
    else{
        for(int sale = idx; sale < n; sale++) {
            if(arr[sale] > max_price) {
                max_price = arr[sale];
            }
        }
        cout << max_price - buy;
    }
    return 0;
}