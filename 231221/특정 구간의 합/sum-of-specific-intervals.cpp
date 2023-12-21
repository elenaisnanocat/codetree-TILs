#include <iostream>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i + 1];
    }
    
    for(int j = 0; j < m; j++) {
        int a1, a2;
        cin >> a1 >> a2;

        int sum = 0;
        for(int k = a1; k <= a2; k++) {
            sum += arr[k];
        }
        cout << sum << "\n";
    }

    return 0;
}