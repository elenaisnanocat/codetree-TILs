#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt3 = 0;
    int cnt5 = 0;
    
    for(int t = 0; t < 10; t++){
        cin >> n;
        if(n % 3 == 0) cnt3++;
        if(n % 5 == 0) cnt5++;
    }
    cout << cnt3 << " " << cnt5;
    return 0;
}