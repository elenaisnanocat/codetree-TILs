#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, n1, n2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++) {
        if(isdigit(s1[i])) n1 += s1[i];
        else break;
    }

    for(int j = 0; j < s2.size(); j++) {
        if(isdigit(s2[j])) n2 += s2[j];
        else break;
    }
    cout << stoi(n1) + stoi(n2);
    return 0;
}