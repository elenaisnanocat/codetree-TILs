#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    
    int later = 0, first = 0;
    for(int i = 1; i < m1; i++) {
        later += num_of_days[i];
    }
    later += d1;
    for(int i = 1; i < m2; i++) {
        first += num_of_days[i];
    }
    first += d2;

    
    cout << first - later + 1;
    return 0;
}