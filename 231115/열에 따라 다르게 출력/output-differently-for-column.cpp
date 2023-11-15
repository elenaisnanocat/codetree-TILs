#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 1) {
                cnt += 2;
                cout << cnt << " ";
            }
            else{
                cnt++;
                cout << cnt << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}