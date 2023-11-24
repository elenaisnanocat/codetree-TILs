#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max_v = INT_MIN;
    int arr[10] = {};
    for(int i = 0; i < 10; i ++) {
        cin >> arr[i];
        if(arr[i] > max_v) {
            max_v = arr[i];
        }
    }
    cout << max_v;


    return 0;
}