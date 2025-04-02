#include <iostream>
using namespace std;

int main() {
    int num;

    while(1) {
        cin >> num;
        if(num == 25) {
            cout << "Good" << "\n";
            break;
        }
        else if(num < 25) cout<< "Higher" << "\n";
        else cout << "Lower" << "\n";
    }
    return 0;
}