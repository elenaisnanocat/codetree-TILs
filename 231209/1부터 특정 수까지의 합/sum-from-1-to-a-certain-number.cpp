#include <iostream>

using namespace std;

int Div(int num) {
    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum / 10;
}
 
int main() {
    int n;
    cin >> n;

    int ans = Div(n);
    cout << ans;

    return 0;
}