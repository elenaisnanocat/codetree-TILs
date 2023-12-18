#include <iostream>

using namespace std;

bool yun(int n) {
    if(n % 4 == 0)
        return true;
    if(n % 4 == 0 && n % 100 == 0)
        return false;
    if(n % 4 == 0 && n % 100 == 0 && n % 400 == 0)
        return true;
    else
        return false;
}

int main() {
    int y;
    cin >> y;

    if(yun(y)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}