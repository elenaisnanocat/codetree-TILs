#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, len = 0, acnt = 0;
    cin >> n;

    string str[n];

    for(int i = 0; i < n; i++) {
        cin >> str[i];
        len += str[i].length();
        if(str[i][0] == 'a') acnt++;
    }
    cout << len << " " << acnt;
    return 0;
}