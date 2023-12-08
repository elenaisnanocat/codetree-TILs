#include <iostream>
#include <string>

using namespace std;

int main() {
    int n1, n2, sum;
    cin >> n1 >> n2;

    sum = n1 + n2;
    
    int cnt = 0;
    string s = to_string(sum);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') cnt++;
    }

    cout << cnt;
    return 0;
}