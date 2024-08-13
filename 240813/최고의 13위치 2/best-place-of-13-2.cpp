#include <iostream>
#include <algorithm>

#define MAX_N 20

using namespace std;

int n;
int arr[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            for(int k = 0; k < n; k++) {
                for(int l = 0; l < n - 2; l++) {
                    if(i == k && abs(j - l) <= 2) continue;

                    int cnt1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                    int cnt2 = arr[k][l] + arr[k][l + 1] + arr[k][l + 2];
                    cnt = max(cnt, cnt1 + cnt2);
                }
            }
        }
    }
    cout << cnt;

    return 0;
}