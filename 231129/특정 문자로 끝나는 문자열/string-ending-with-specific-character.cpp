#include <iostream>
#include <string>

using namespace std;

int main() {
    string str[10];
    char c;
    
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    cin >> c;

    bool flag = true;
    for(int i = 0; i < 10; i++) {
        int idx = str[i].length() - 1;
        if(str[i][idx] == c) {
            cout << str[i] << "\n";
            flag = false;
        }
    }
    if(flag) cout << "None";

    return 0;
}