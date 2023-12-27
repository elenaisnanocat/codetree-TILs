#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int si1, si2;
string s1, s2;
bool flag = true;

int main() {
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    si1 = s1.size();
    si2 = s2.size();

    if(si1 != si2) {
        flag = false;
    }
    else {
        for(int i = 0; i < si1; i++) {
            if(s1[i] != s2[i]) flag = false;
        }
    }

    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}