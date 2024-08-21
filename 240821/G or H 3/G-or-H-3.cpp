#include <iostream>
#include <algorithm>

#define MAX_R 10000

using namespace std;

int n, k;
int arr[MAX_R + 1];

int main() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        int x; char c;
        cin >> x >> c;

        if(c == 'G') arr[x] = 1;
        else arr[x] = 2;
    }

    int max_sum = 0;
    for(int i = 0; i <= MAX_R - k; i++) {
        int cur_sum = 0;
        for(int j = i; j <= i + k; j++)
            cur_sum += arr[j];
        
        max_sum = max(max_sum, cur_sum);
    }
    
    cout << max_sum;
    return 0;
}