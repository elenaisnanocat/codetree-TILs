#include <iostream>

using namespace std;

int main() {
    int fx1, fy1, fx2, fy2;
    int sx1, sy1, sx2, sy2;
    cin >> fx1 >> fy1 >> fx2 >> fy2;
    cin >> sx1 >> sy1 >> sx2 >> sy2;

    cout << (fx2 - fx1) * (fy2 - fy1);
    return 0;
}