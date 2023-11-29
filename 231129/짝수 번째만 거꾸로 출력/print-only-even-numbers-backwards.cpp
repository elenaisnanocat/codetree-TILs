#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, even;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 1) {
            even += s[i];
        }
    }
    for(int i = even.length() - 1; i >= 0; i--){
        cout << even[i];
    }  

    return 0;
}