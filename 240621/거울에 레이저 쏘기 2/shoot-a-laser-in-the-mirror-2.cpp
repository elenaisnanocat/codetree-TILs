#include <iostream>

#define MAX_N 1000
#define DIR_NUM 4

using namespace std;

int n, st, r, c, move_dir;
char arr[MAX_N][MAX_N];

void Initialize(int num) {
    if(num <= n) {
        r = 0; c = num - 1; move_dir = 0;
    }
    else if(num <= 2 * n) {
        r = num - n - 1; c = n - 1; move_dir = 1;
    }
    else if(num <= 3 * n) {
        r = n - 1; c = n - (num - 2 * n); move_dir = 2;
    }
    else {
        r = n - (num - 3 * n); c = 0; move_dir = 3;
    }
}

bool InRange(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < n;
}

void Move(int next_dir) {
    int dr[DIR_NUM] = {1, 0, -1, 0};
    int dc[DIR_NUM] = {0, -1, 0, 1};

    r += dr[next_dir];
    c += dc[next_dir];
    move_dir = next_dir;
}

int Simulate() {
    int move_num = 0;
    while(InRange(r, c)) {
        if(arr[r][c] == '/')
            Move(move_dir ^ 1);
        else
            Move(3 - move_dir);
        move_num += 1;
    }
    return move_num;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    cin >> st;

    Initialize(st);

    int move_num = Simulate();

    cout << move_num;
    return 0;
}