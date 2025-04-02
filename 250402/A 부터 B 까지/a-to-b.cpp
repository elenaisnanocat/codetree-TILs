#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int num = a;
    
    while(num <= b) {
        cout << num << " ";
        if(num % 2 == 1) num *= 2;
        else num += 3;
    }

    return 0;
}