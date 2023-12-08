#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, num;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    
    string ss = to_string(sum);
    ss = ss.substr(1, ss.size() - 1) + ss.substr(0, 1);

    cout << ss;
    return 0;
}