#include <iostream>

#define MAX_R 2000
#define OFFSET 1000

int ax, ay, axx, ayy;
int bx, by, bxx, byy;
int mx, my, mxx, myy;
int arr[MAX_R + 1][MAX_R + 1];

using namespace std;

int main() {
    cin >> ax >> ay >> axx >> ayy;
    cin >> bx >> by >> bxx >> byy;
    cin >> mx >> my >> mxx >> myy;

    ax += OFFSET;
    ay += OFFSET;
    axx += OFFSET;
    ayy += OFFSET;
    bx += OFFSET;
    by += OFFSET;
    bxx += OFFSET;
    byy += OFFSET;
    mx += OFFSET;
    my += OFFSET;
    mxx += OFFSET;
    myy += OFFSET;
    
    for(int i = ax; i < axx; i++) {
        for(int j = ay; j < ayy; j++) {
            arr[i][j] = 1;
        }
    }
    for(int i = bx; i < bxx; i++) {
        for(int j = by; j < byy; j++) {
            arr[i][j] = 1;
        }
    }
    for(int i = mx; i < mxx; i++) {
        for(int j = my; j < myy; j++) {
            arr[i][j] = 0;
        }
    }
    
    int cnt = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;

    return 0;
}