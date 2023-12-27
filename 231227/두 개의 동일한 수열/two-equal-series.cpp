#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n, arra[MAX_N], arrb[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arra[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arrb[i];
    }

    sort(arra, arra + n);
    sort(arrb, arrb + n);

    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(arra[i] != arrb[i]) {
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}