#include <iostream>
using namespace std;

int n, m;
int mtx1[10][10];
int mtx2[10][10];
int res[10][10];

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mtx1[i][j];            
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mtx2[i][j];            
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mtx1[i][j] == mtx2[i][j]) {
                res[i][j] = 0;
            }
            else res[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << res[i][j] << " ";            
        }
        cout << "\n";
    }

    return 0;
}