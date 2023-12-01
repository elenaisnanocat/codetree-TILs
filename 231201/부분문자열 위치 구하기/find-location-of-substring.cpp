#include <iostream>
#include <string>

using namespace std;

int main() {

    string s, t;
    cin >> s >> t;

    int idx = -1;
    for(int i = 0; i < s.size(); i++) {
        if(s.find(t) != string::npos) {
            idx = s.find(t);
        }
    }
    cout << idx;
    return 0;
}