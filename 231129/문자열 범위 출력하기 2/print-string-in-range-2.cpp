#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    int n;
    cin >> n;

    int cnt = n;
    for(int i = s.length() - 1; i >= 0; i--) {
        if(cnt) {
            cout << s[i];
            cnt--;    
        }
        
    }

    return 0;
}