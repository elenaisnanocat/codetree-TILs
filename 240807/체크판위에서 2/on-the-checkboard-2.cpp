#include <iostream>
using namespace std;

#define MAX_R 15
#define MAX_C 15

int r, c;
char map[MAX_R][MAX_C];

int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> map[i][j];
        }
    }

    int cnt = 0;
    for(int i = 1; i < r; i++) {
        for(int j = 1; j < c; j++) {
            for(int k = i + 1; k < r - 1; k++) {
                for (int l = j + 1; l < c - 1; l++) {
                    if(map[0][0] != map[i][j] &&
                        map[i][j] != map[k][l] &&
                        map[k][l] != map[r - 1][c - 1])
                        cnt++;
                }
            }
        }
    }
    cout << cnt;


    return 0;
}