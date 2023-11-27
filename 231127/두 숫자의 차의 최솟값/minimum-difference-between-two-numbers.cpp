#include <iostream>

using namespace std;

int main() {
    int n, arr[10] = {};
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    int min_ans = arr[n - 1];

    for(int valf = n - 1; valf > 0; valf--) {
        for(int vals = valf - 1; vals >= 0; vals--) {
            int min_v = arr[valf] - arr[vals];
            //cout << min_v << " ";
            if(min_v < min_ans) {
                min_ans = min_v;
            }
        }
    }
    cout << min_ans;
    return 0;
}