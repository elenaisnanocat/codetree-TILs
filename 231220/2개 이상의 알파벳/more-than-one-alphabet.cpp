#include <iostream>
#include <string>

using namespace std;

bool IsDif(string str) {
    for(int i = 0; i < str.size(); i++) {
        if(str[i] != str[0]) return true;
    }
    return false;
}

int main() {
    string a;
    cin >> a;

    if(IsDif(a)) cout << "Yes";
    else cout << "No";
    return 0;
}