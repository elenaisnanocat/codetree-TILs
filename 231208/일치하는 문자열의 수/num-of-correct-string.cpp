#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string a;

    cin >> n >> a;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == a) cnt++;
    }
    cout << cnt;
    
    return 0;
}