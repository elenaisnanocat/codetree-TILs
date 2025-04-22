#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cin >> score;

    string ans = score == 100 ? "pass" : "failure";
    cout << ans;
    return 0;
}