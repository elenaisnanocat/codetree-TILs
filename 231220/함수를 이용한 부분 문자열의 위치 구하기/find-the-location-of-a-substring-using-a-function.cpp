#include <iostream>
#include <string>

using namespace std;

string s, p;
int idx;

int FindSt(string s,string p) {
    if(s.find(p) != string::npos) {
        idx = s.find(p);
        return idx;
    }
    else {
        idx = -1;
        return idx;
    }
}

int main() {
    
    cin >> s >> p;
    FindSt(s, p);
    cout << idx;
    return 0;
}