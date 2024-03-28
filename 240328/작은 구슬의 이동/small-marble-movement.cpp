#include <iostream>

#define ASCII_NUM 128

using namespace std;

int dx[4] = {0, 1, -1, 0}; //R D U L 0 1 2 3 dr
int dy[4] = {1, 0, 0, -1}; // dc

int n, t, x, y, dir;
int mapper[ASCII_NUM];

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

void Simulate() {
    while(t--) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!InRange(nx, ny)) {
            dir = 3 - dir;
        }
        else {
            x = nx;
            y= ny;
        }
    }
}

int main() {
    cin >> n >> t;
    char d;
    cin >> x >> y >> d;

    mapper['R'] = 0;
    mapper['D'] = 1;
    mapper['U'] = 2;
    mapper['L'] = 3;

    x--; y--;
    dir = mapper[d];

    Simulate();

    cout << x + 1 << " " << y + 1;
    return 0;
}