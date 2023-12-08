#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    for(int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        //cout << s;
        if(s != "END") {
            reverse(s.begin(), s.end());
            cout << s << "\n";
        }
        else break;
    }
    return 0;
}