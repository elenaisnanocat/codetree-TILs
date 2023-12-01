#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    int len = s.size();
    
    int eecnt = 0, ebcnt = 0;
    for(int i = 0; i < len - 1; i++) {
        if(s.substr(i, 2) == "ee") {
            eecnt++;
        }
        if(s.substr(i, 2) == "eb") {
            ebcnt++;
        }
    }
    cout << eecnt << " " << ebcnt;

    
    return 0;
}