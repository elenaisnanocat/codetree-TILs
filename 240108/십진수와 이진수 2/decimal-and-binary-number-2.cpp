#include <iostream>
#include <string>

using namespace std;

int main() {
    string binary;
    cin >> binary;

    int num = 0;
    for(int i = 0; i < (int)binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }
    num *= 17;

    int digits[10000000] = {};
    int cnt = 0;
    while(true) {
        if(num < 2) {
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}