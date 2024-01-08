#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    //m1
    int later = 0, first = 0;
    if(m1 >= m2) {
        for(int i = 1; i <= m1; i++) {
            later += num_of_days[i];
        }
        later += d1;
        for(int i = 1; i <= m2; i++) {
            first += num_of_days[i];
        }
        first += d2;
    }
    else {
        for(int i = 1; i <= m1; i++) {
            first += num_of_days[i];
        }
        first += d1;
        for(int i = 1; i <= m2; i++) {
            later += num_of_days[i];
        }
        later += d2;
    }
    cout << later - first;
    return 0;
}