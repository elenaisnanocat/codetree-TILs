#include <iostream>

using namespace std;

bool Oneofkind(int n){
    while(n > 0) {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            return true;
        n /= 10;
    }
    return false;
}

bool istruef(int n) {
    return Oneofkind(n) || (n % 3 == 0);
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <=b; i++) {
        if(istruef(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}