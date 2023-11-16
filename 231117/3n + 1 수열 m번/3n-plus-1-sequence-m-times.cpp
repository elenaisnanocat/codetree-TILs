#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        int cnt = 0;
        while(n != 1){
            if(n % 2 == 0) {
                n /= 2;
                cnt++;
            }
            else {
                n = 3 * n + 1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}