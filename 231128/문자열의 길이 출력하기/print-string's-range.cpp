#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1, str2;
    cin >> str1 >> str2;
    int ans = str1.length() + str2.length();
    cout << ans;
    
    return 0;
}