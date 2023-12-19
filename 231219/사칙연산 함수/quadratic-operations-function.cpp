#include <iostream>

using namespace std;

int isPlus(int a, int c) {
    return a + c;
}

int isMulti(int a, int c) {
    return a * c;
}

int isMinus(int a, int c) {
    return a - c;
}

int isDiv(int a, int c) {
    return a / c;
}

int main() {
    int a, c;
    char o;
    
    cin >> a >> o >> c;

    if(o == '+') {
        cout << a << " + " << c << " = " << isPlus(a, c);
    }
    else if(o == '-') {
        cout << a << " - " << c << " = " << isMinus(a, c);
    }
    else if(o == '*') {
        cout << a << " * " << c << " = " << isMulti(a, c);
    }
    else if(o == '/') {
        cout << a << " / " << c << " = " << isDiv(a, c);
    }
    else cout << "False";
    return 0;
}