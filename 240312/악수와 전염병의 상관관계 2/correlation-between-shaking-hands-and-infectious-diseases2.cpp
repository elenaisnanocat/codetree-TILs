#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_T 250

using namespace std;

int n, k, p, t;
int shake_cnt[MAX_N + 1];
bool infected[MAX_N + 1]; //감염 여부

class Shake{
    public:
        int time;
        int per1;
        int per2;
        Shake(int time, int per1, int per2) {
            this->time = time;
            this->per1 = per1;
            this->per2 = per2;
        }
        Shake(){}
};

bool cmp(const Shake &a, const Shake &b) {
    return a.time < b.time;
}

int main() {
    cin >> n >> k >> p >> t;

    infected[p] = true; //최초 감염

    Shake shakes[MAX_T];

    for(int i = 0; i < t; i++) {
        int time, per1, per2;
        cin >> time >> per1 >> per2;
        shakes[i] = Shake(time, per1, per2);
    }

    sort(shakes, shakes + t, cmp);

    for(int i = 0; i < t; i++) {
        int target1 = shakes[i].per1;
        int target2 = shakes[i].per2;

        if(infected[target1]) shake_cnt[target1]++;
        if(infected[target2]) shake_cnt[target2]++;

        if(shake_cnt[target1] <= k && infected[target1]) infected[target2] = true;
        if(shake_cnt[target2] <= k && infected[target2]) infected[target1] = true;
    }

    for(int i = 1; i <= n; i++) {
        if(infected[i]) cout << 1;
        else cout << 0;
    }
    
    return 0;
}