#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int tempa = a;
    int tempb = b;

    a = c;
    b = tempa;
    c = tempb;

    cout << a << "\n" << b << "\n" << c;
    return 0;
}