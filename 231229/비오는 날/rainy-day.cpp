#include <iostream>
#include <string>

using namespace std;

int n;
string week, date, weather;

class RainDay{
    public:
        string wk, da, we;

        RainDay(string week, string date, string weather) {
            this->wk = week;
            this->da = date;
            this->we = weather;
        }
        RainDay() {}
};

int main() {
    cin >> n;

    RainDay rd[n];
    int minidx = n;
    for(int i = 0; i < n; i++) {
        cin >> week >> date >> weather;
        rd[i] = RainDay(week, date, weather);
        if(rd[i].we == "Rain") {
            //cout << "R";
        
            if(rd[i].wk < rd[minidx].wk)
                minidx = i;
        }
    }
    //cout << minidx;
    cout << rd[minidx].wk << " " << rd[minidx].da << " " << rd[minidx].we;

    return 0;
}