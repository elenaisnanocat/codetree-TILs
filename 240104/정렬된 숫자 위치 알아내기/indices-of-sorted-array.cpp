#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

int n, num_cache;
int ans[MAX_N];

class Num{
    public:
        int num, idx;
        
        Num(int num, int idx) {
            this->num = num;
            this->idx = idx;
        }
        Num() {}
};

bool cmp(const Num &a, const Num &b) {
    if(a.num == b.num) {
        return a.idx < b.idx;
    }
    return a.num < b.num;
}

Num nums[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num_cache;
        nums[i] = Num(num_cache, i);
    }
    sort(nums, nums + n, cmp);

    for(int i = 0; i < n; i++) {
        ans[nums[i].idx] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}