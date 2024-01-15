#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[1001];
int contival[1001];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int j = 0; j < n - 1; j++) {
        if(arr[j] == arr[j + 1]){
            cnt++;
            contival[arr[j]] = cnt;
        }
        else cnt = 0;
    }

    int max_v = *max_element(begin(contival), end(contival));
    cout << max_v + 1;
    
    return 0;
}