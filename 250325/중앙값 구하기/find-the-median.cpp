#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end(), compare);
    
    cout << v[1];
    return 0;
}