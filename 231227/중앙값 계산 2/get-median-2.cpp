#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n, arr[MAX_N];


 bool isOdd(int num) {
        if(num % 2 == 0) {
            return true;
        }
        return false;
    }

int Avg(int num2) {
        sort(arr, arr + num2);
        return arr[num2 / 2];
    }

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if(isOdd(i)) {
            cout << Avg(i + 1) << " ";
        }
    }
    return 0;
}