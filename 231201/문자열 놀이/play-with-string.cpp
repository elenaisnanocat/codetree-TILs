#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int q;

    cin >> s >> q;

    for (int i = 0; i < q; i++) {
        int order = 0, idx1 = 0, idx2 = 0;
        char fir, sec;

        cin >> order;
        if(order == 1) {
            cin >> idx1 >> idx2;
            char temp = s[idx1 - 1];

            s[idx1 - 1] = s[idx2 - 1];
            s[idx2 - 1] = temp;
            cout << s << "\n";
        }
        if(order == 2) {
            cin >> fir >> sec;
            for(int j = 0; j < s.size(); j++) {
                if(s[j] == fir) {
                    s[j] = sec;
                }
            }
            cout << s << "\n";
        }

    }
    return 0;
}