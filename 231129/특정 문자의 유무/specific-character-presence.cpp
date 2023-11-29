#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;
    int len = s.length();
    bool flee = false;
    bool flab = false;
    for(int i = 0; i < len - 1; i++) {
        if(s.substr(i, 2) == "ee") {
            flee = true;
        }
        
        if(s.substr(i, 2) == "ab") {
            flab = true;
        }
    }
    if(flee) cout << "Yes";
    else cout << "No";

    cout << " ";

    if(flab) cout << "Yes";
    else cout << "No";

    return 0;
}