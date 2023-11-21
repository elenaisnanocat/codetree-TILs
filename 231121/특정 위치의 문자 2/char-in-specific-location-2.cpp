#include <iostream>

using namespace std;

int main() {
    char arr[10];

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(i == 1 || i == 4 || i == 7) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}