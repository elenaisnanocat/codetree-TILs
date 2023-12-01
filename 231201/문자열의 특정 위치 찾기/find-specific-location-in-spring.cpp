#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, f;
    cin >> s >> f;

    int sidx = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s.find(f) != string::npos) {
            sidx = s.find(f);
        }
    }

    if(sidx != -1) cout << sidx;
    else cout << "No";


    return 0;
}