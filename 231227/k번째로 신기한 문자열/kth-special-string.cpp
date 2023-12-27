#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k, cnt;
string t, str, arr[100];

bool CanArray(string a, string b) {
    if((int)a.size() < (int)b.size()) return false;

    return true;
}

int main() {
    cin >> n >> k >> t;

    for(int i = 0; i < n; i++) {
        cin >> str;


        if(CanArray(str, t) && str.substr(0, t.size()) == t) {
            arr[cnt++] = str;
        }
    }
    
    sort(arr, arr + cnt);

    cout << arr[k - 1];
    
    return 0;
}