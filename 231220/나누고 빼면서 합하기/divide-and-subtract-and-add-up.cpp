#include <iostream>

using namespace std;

int n, m, sum;
int arr[100];

int ChangeN(int m) {
    while(m != 1) {
        if(m % 2 != 0) {
            m -= 1;
        }
        else m /= 2;

        //cout << m;
        sum += arr[m - 1];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ChangeN(m);
    //cout << m;
    cout << arr[m - 1] + sum;


    return 0;
}