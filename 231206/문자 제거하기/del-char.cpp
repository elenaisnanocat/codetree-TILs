#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    
    while(len > 1) {
        int num;
        cin >> num;

        if(num >= len) num = len - 1;

        s.erase(num, 1);
        len--;

        cout << s << "\n";
    }

    return 0;
}