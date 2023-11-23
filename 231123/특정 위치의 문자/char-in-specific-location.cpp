#include <iostream>

using namespace std;

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char c;
    cin >> c;

    int idx = -1;

    for(int i = 0; i < 6; i++) {
        if(word[i] == c) {
            idx = i;
        }
    }

    if(idx == -1) {
        cout << "None";
    }
    else {
        cout << idx;
    }



    return 0;
}