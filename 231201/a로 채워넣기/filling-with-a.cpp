#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();

    s[1] = 'a';
    s[len - 2] = 'a';

    cout << s;
    return 0;
}