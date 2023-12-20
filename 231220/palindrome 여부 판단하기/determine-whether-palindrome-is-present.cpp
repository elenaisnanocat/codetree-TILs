#include <iostream>
#include <string>

using namespace std;

bool Palin(string &s) {
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != s[(int)s.size() - i - 1])
            return false;
    }return true;
}

int main() {
    string s;
    cin >> s;

    if(Palin(s)) cout << "Yes";
    else cout << "No";

    return 0;
}