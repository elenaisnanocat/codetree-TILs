#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, order;
    cin >> s >> order;

    for(int i = 0; i < order.size(); i++) {
        if(order[i] == 'L') {
            s = s.substr(1, s.size() - 1) + s.substr(0, 1);
        }
        else if(order[i] == 'R') {
            s = s.substr(s.size() - 1, 1) + s.substr(0, s.size() - 1);
        }
    }
    cout << s;


    return 0;
}