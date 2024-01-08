#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;
string sday;

int NumOfDay(int m, int d) {
    
    int tdays = 0;
    int day_of_month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 1; i < m; i++) {
        tdays += day_of_month[i];
    }
    tdays += d;

    return tdays;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> sday;

    int diff = NumOfDay(m2, d2) - NumOfDay(m1, d1);

    int cnt_week = diff / 7;
    //cout << cnt_week;

    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    int sday_idx = 0;

    for(int i = 0; i < 7; i++) {
        if(day_of_week[i] == sday) {
            sday_idx = i;
        }
    }
    if((diff % 7) <= sday_idx) cnt_week++;
    
    cout << cnt_week;
    
    return 0;
}