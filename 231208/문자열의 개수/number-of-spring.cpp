#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[200];

    int cnt = 0;

    for(int i = 0; i < 200; i++) {
        string s;
        cin >> s;

        if(s == "0") break;

        arr[i] = s;
        cnt++;
    }
    cout << cnt << "\n";

    for(int i = 0; i < 200; i++) {
        if(i % 2 == 0) cout << arr[i] << "\n";
    }
    
    return 0;
}