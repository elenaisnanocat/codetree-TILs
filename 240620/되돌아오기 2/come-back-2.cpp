#include <iostream>
#include <string>

#define DIR_NUM 4

using namespace std;

string dirs;
int r, c;
int dir = 3;

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};

int main() {
    cin >> dirs;

    bool flag = false;

    for(int i = 0; i < (int)dirs.size(); i++) {
        char c_dir = dirs[i];

        if(c_dir == 'L')
            dir = (dir - 1 + 4) % 4;
        else if(c_dir == 'R')
            dir = (dir + 1) % 4;
        else {
            r += dr[dir];
            c += dc[dir];
        }

        if(r == 0 && c == 0) {
            cout << i + 1;
            flag = true;
            break;
        }
    }

    if(flag == false)
        cout << -1;
    return 0;
}