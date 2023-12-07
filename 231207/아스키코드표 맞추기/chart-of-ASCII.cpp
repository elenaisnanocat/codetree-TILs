#include <iostream>
using namespace std;

int main() {
    
    int num;
    char c;
    
    for(int i = 0; i < 5; i++) {
        cin >> num;
        c = (char)num;
        cout << c << " ";
    }
    return 0;
}