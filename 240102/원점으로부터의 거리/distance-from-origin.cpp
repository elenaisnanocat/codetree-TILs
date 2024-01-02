#include <iostream>
#include <algorithm>

using namespace std;

int n, x, y;

class Dot {
    public:
        int x, y, idx;
        
        Dot(int x, int y, int idx) {
            this->x = x;
            this->y = y;
            this->idx = idx;
        }
        Dot() {}
};

int dis(const Dot &a) {
    return abs(0 - a.x) + abs(0 - a.y);
}

bool cmp(const Dot &a, const Dot &b) {
    if(dis(a) == dis(b)) {
        return a.idx < b.idx;
    }
    return dis(a) < dis(b);
}

int main() {
    cin >> n;

    Dot dots[n];
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        dots[i] = Dot(x, y, i + 1);
    }
    sort(dots, dots + n, cmp);
    
    for(int j = 0; j < n; j++) {
        cout << dots[j].idx << "\n";
    }
    return 0;
}