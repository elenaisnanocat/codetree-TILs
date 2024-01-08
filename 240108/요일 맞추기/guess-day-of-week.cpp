#include <iostream>
#include <string>

using namespace std;


int m1, d1, m2, d2;


int NumOfDays(int m, int d) {
    
    int day_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int tdays = 0;

    for(int i = 1; i < m; i++) tdays += day_of_month[i];
    tdays += d;

    return tdays;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    while(diff < 0) diff += 7;

    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << day_of_week[diff % 7];

    return 0;
}