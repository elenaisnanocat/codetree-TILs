#include <iostream>

using namespace std;

int n, x, y, nx, ny;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1}; //동남서북ESWN

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        char dir;
        int dis;
        int dir_num = -1;
        cin >> dir >> dis;
        if(dir == 'E') dir_num = 0;
        else if(dir == 'S') dir_num = 1;
        else if(dir == 'W') dir_num = 2;
        else if(dir == 'N') dir_num = 3;

        nx = x + dx[dir_num] * dis;
        ny = y + dy[dir_num] * dis;
        x = nx;
        y = ny;
    }
    cout << x << " " << y;
    
    return 0;
}