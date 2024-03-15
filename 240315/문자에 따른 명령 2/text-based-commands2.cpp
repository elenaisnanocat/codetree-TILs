#include <iostream>
#include <string>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1}; //동남서북
int x, y;
int dir_num = 3;
string dirs;

int main() {
    cin >> dirs;

    for(int i = 0; i < (int)dirs.size(); i++) {
        char c= dirs[i];

        if(c == 'L') dir_num = (dir_num + 3) % 4;
        else if (c == 'R') dir_num = (dir_num + 1) % 4;
        else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }

    cout << x << " " << y;
    return 0;
}