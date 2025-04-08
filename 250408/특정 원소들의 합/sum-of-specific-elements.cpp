#include <iostream>
using namespace std;

int mtx[4][4] = {{1, 0, 0, 0},
                {1, 1, 0, 0},
                {1, 1, 1, 0},
                {1, 1, 1, 1}};

int arr[4][4];
int total;

int main() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(mtx[i][j] == 1) {
                total += arr[i][j];
            }
        }
    }
    cout << total;
    
    return 0;
}