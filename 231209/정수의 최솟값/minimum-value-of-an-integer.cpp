#include <iostream>
#include <algorithm>

using namespace std;

int MinVal(int n1, int n2, int n3) {
    return min({n1, n2, n3});
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << MinVal(a, b, c);

    return 0;
}