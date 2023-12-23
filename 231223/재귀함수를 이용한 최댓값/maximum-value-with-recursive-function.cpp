#include <iostream>

using namespace std;

int n, maxnum;
int arr[100];

int MaxV(int n) {
    if(n == 0) return arr[0];

    int curv = MaxV(n - 1);
    if(curv > arr[n]) {
        maxnum = curv;
    }
    else maxnum = arr[n];
    return maxnum;
    
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << MaxV(n);
    return 0;
}