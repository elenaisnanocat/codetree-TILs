#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s, words;
    for(int i = 0; i < n; i++) {
        cin >> s;
        words += s;
    }
    
    for(int i = 0; i < words.length(); i++) {
        cout << words[i];
        if((i + 1) % 5 == 0) cout << "\n";
    }

    return 0;
}