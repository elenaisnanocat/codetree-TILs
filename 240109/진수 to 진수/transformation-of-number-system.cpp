#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    //a진수 n -> 10진수
    string n;
    cin >> n;

    int a_to_ten = 0;
    for(int i = 0; i < (int)n.size(); i++) {
        a_to_ten = a_to_ten * a + (n[i] - '0');
    }
    //cout << a_to_ten;   
    int ten_to_b = a_to_ten;

    //n의 10진수 -> b진수
    int digits[20000000] = {};
    int cnt = 0;

    while(true) {
        if(ten_to_b < b) {
            digits[cnt++] = ten_to_b;
            break;
        }
        digits[cnt++] = ten_to_b % b;
        ten_to_b /= b;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }


    return 0;
}