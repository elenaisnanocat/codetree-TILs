#include <iostream>

using namespace std;

//'a' 97
int main() {
    char c;
    cin >> c;
    
    char ans;
    if(c != 'z') {
        ans = (int)c + 1;
    }
    else ans = 'a';

    cout << ans;
    return 0;
}