#include <iostream>
#include <algorithm>

using namespace std;

int n, h, w;

class Student {
    public:
        int h, w, idx;

        Student(int h, int w, int idx) {
            this->h = h;
            this->w = w;
            this->idx = idx;
        }
        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    if(a.h == b.h) {
        if(a.w == b.w) {
            return a.idx < b.idx;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++) {
        cin >> h >> w;
        students[i] = Student(h, w, i + 1);
    }
    sort(students, students + n, cmp);

    for(int j = 0; j < n; j++) {
        cout << students[j].h << " " << students[j].w << " " << students[j].idx << "\n"; 
    }

    return 0;
}