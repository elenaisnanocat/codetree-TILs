#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    char fir = s[0], sec = s[1];
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == fir) {
            s[i] = sec;
        }
        else if(s[i] == sec) {
            s[i] = fir;
        }
    }

    cout << s;
    return 0;
}