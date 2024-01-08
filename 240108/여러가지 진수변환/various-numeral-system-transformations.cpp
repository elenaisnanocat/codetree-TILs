#include <iostream>

using namespace std;


int main() {
    int n, b;
    cin >> n >> b;

    int digits[510] = {};
    int cnt = 0;

    if(b == 4) {
        
        while(true) {
            if(n < 4) {
                digits[cnt++] = n;
                break;          
            }
            digits[cnt++] = n % 4;
            n /= 4;
        }
    }    
    else if(b == 8) {
        while(true) {
            if(n < 8) {
                digits[cnt++] = n;
                break;          
            }
            digits[cnt++] = n % 8;
            n /= 8;
        }
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}