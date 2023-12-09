#include <iostream>
#include <string>

using namespace std;

bool FMul(int a) {
    string s = to_string(a);
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    if(sum % 5 == 0) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0 && FMul(n)) cout << "Yes";
    else cout << "No";
    return 0;
}