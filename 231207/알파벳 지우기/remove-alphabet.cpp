#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s1, s2, n1, n2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++) {
        if(isdigit(s1[i])) n1 += s1[i];
    }

    for(int j = 0; j < s2.size(); j++) {
        if(isdigit(s2[j])) n2 += s2[j];
    }

    int ans = stoi(n1) + stoi(n2);
    cout << ans;
    
    return 0;
}