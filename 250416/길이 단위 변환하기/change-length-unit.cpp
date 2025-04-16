#include <iostream>
using namespace std;

double ft = 30.48;
double mi = 160934;

int main() {


    cout << fixed;
    cout.precision(1);

    cout << 9.2 << "ft = " << 9.2 * ft << "cm" << "\n";
    cout << 1.3 << "mi = " << 1.3 * mi << "cm";

    return 0;
}