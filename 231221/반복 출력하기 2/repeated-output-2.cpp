#include <iostream>
#include <string>

using namespace std;

int n;

void PrintHello(int n) {
    if(n == 0) return;
    PrintHello(n - 1);
    cout << "HelloWorld" << "\n";
}

int main() {
    cin >> n;

    PrintHello(n);

    return 0;
}