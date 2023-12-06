#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;

    cin >> a;
    cin >> b;

    while(a.find(b) != string::npos) {
        int st_p = a.find(b);
        a.erase(st_p, b.size());
    }

    cout << a;
    return 0;
}