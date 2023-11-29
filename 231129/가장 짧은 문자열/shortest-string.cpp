#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr[3] = {};

    int ss1 = s1.length(), ss2 = s2.length(), ss3 = s3.length();
    arr[0] = ss1;
    arr[1] = ss2;
    arr[2] = ss3;

    sort(arr, arr+2);
    cout << arr[2] - arr[0];
    

    return 0;
}