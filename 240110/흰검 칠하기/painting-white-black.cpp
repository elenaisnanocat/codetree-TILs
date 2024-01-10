#include <iostream>

#define MAX_N 1000
#define MAX_R 200000
#define OFFSET 100000

int n, b, w, g;
int arr[MAX_R + 1], checked_b[MAX_R + 1], checked_w[MAX_R + 1];

using namespace std;

int main() {
    cin >> n;
    int cur = MAX_R / 2;
    
    for(int i = 0; i < n; i++) {
        int dis;
        char dir;
        cin >> dis >> dir;

        if(dir == 'L') {
            while(dis--) {
                arr[cur] = 1;
                checked_w[cur]++;
                if(dis) cur--;
            }
        }
        else{
            while(dis--) {
                arr[cur] = 2;
                checked_b[cur]++;
                if(dis) cur++;
            }
        }
    }

    for(int i = 0; i <= MAX_R; i++) {
        if(checked_w[i] >= 2 && checked_b[i] >= 2) g++;
        else if(arr[i] == 1) w++;
        else if(arr[i] == 2) b++;
    }

    cout << w << " " << b << " " << g;

    return 0;
}