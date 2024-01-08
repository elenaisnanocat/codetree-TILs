#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, h, w;

class Student{
    public:
        int h, w, k;

        Student(int h, int w, int k) {
            this->h = h;
            this->w = w;
            this->k = k;
        }
        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    if(a.h == b.h) return a.w > b.w;
    return a.h < b.h;
}

int main() {
    cin >> n;
    Student students[MAX_N];

    for(int i = 0; i < n; i++) {
        cin >> h >> w;
        students[i] = Student(h, w, i + 1);
    }
    sort(students, students + n, cmp);
    
    for(int i = 0; i < n; i++) {
        cout << students[i].h << " " << students[i].w << " " << students[i].k << "\n";
    }
    return 0;
}