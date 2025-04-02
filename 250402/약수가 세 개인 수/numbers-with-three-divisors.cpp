#include <iostream>

using namespace std;

int s, e;

int main() {
    cin >> s >> e;

    int count = 0;
    for(int i = s; i <= e; i++) {
        int cnt = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {   
                cnt++;
            }
        }
        //cout << cnt;
        
        if(cnt == 3) count++;
    }
    cout << count;

    return 0;
}
