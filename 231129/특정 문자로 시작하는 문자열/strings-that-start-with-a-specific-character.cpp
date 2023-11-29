#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, cnt = 0, sum_v = 0;
    cin >> n;

    string s[n];
    char w;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    cin >> w;

    for(int i = 0; i < n; i++) {
        if(s[i][0] == w) {
            cnt++;
            sum_v += s[i].length();
        }
    }

    cout << cnt << " ";
    double avg = (double) sum_v / cnt;
    cout << fixed;
    cout.precision(2);
    cout << avg;


    return 0;
}