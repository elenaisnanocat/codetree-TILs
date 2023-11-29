#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int cnt = 0;
    char w;

    getline(cin, str);
    cin >> w;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == w) cnt++;
    }
    cout << cnt;
    return 0;
}