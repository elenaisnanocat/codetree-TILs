#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a == b) break;

        a = a.substr(a.size() - 1, 1) + a.substr(0, a.size() - 1);
        cnt++;
    }
    
    if(cnt == a.size()) cnt = -1;
    cout << cnt;

    return 0;
}