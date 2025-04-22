#include <iostream>
using namespace std;

int main() {
    double ft;
    cin >> ft;

    cout << fixed;
    cout.precision(1);

    cout << 30.48 * ft;
    return 0;
}