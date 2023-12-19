#include <iostream>

using namespace std;

int n, m;

int arra[100], arrb[100];

bool IsSame(int n) {
    for(int i = 0; i < m; i++) 
        if(arra[i + n] != arrb[i])
            return false;
    return true;
}

bool IsSubsequence() {
    for(int i = 0; i <= n - m; i++)
        if(IsSame(i))
            return true;
    return false;
}


int main() {
    cin >> n >> m;
    
    for(int i = 0; i <= n; i++){
        cin >> arra[i];
    }
    for(int j = 0; j <= m; j++) {
        cin >> arrb[j];
    }

    if(IsSubsequence()) cout << "Yes";
    else cout << "No";

    return 0;
}