#include <iostream>

using namespace std;

#define MAX_N 100

int n, m, k, ans;
int arr[MAX_N + 1];

int main() {
    cin >> n >> m >> k;

    for(int i = 0; i < m; i++) {
        int student_num;
        cin >> student_num;
        arr[student_num]++;

        if(arr[student_num] >= k) {
            ans = student_num;
            break;
        }
        else ans = -1;
    }

    cout << ans;
    return 0;
}