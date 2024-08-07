#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, cnt;
int cow[MAX_N];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> cow[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(cow[i] <= cow[j] && cow[j] <= cow[k]) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}