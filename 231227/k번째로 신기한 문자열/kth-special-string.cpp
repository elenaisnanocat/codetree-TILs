#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k, cnt;
string t, str, arr[100];

int main() {
    cin >> n >> k >> t;

    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str.substr(0, t.size()) == t) {
            arr[i] = str;
            cnt++;
        }
    }
    
    sort(arr, arr + cnt);

     for(int i = 0; i <= cnt; i++) {
        cin >> arr[i];
        //cout << arr[i];
        if(i == k - 1) cout << arr[i];
    }

    
    return 0;
}