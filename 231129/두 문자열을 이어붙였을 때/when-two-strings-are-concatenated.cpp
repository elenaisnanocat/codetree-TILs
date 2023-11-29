#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;

    cin >> a >> b;
    string ab = a + b;
    string ba = b + a;

    bool flag = true;
    for(int i = 0; i < ab.length(); i++) {
        if(ab[i] != ba[i]) flag = false;
    }
    if(flag) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}