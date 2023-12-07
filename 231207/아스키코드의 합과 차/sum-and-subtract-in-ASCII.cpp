#include <iostream>

using namespace std;

int main() {
    int ansp, ansm;
    char c1, c2;

    cin >> c1 >> c2;

    ansp = c1 + c2;   

    if((int)c1 > (int)c2) {
        ansm = c1 - c2;
    }
    else{
        ansm = c2 - c1;
    }
    cout << ansp << " " << ansm;
    return 0;
}