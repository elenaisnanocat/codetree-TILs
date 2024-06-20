#include <iostream>
#include <string>

#define ASCII_NUM 128
#define DIR_NUM 4

using namespace std;

int n, t;
int r, c, dir;
int mapper[ASCII_NUM];

int dr[DIR_NUM] = {0, 1, -1, 0};
int dc[DIR_NUM] = {1, 0, 0, -1};

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

void Simulate() {
    while(t--) {
        int nr = r + dr[dir], nc = c + dc[dir];

        if(InRange(nr, nc)) {
            r = nr, c = nc;
        }
        else
            dir = 3- dir;
    }
}

int main() {
    cin >> n >> t;

    mapper['R'] = 0;
    mapper['D'] = 1;
    mapper['U'] = 2;
    mapper['L'] = 3;

    char c_dir;
    cin >> r >> c >> c_dir;
    r--; c--; dir = mapper[c_dir];

    Simulate();
    cout << r + 1 << " " << c + 1;
    return 0;
}