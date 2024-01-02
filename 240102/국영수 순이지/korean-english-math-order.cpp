#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

string name;
int n, kor, eng, math;

class Student {
    public:
        string na;
        int k, e, m;

        Student(string name, int kor, int eng, int math) {
            this->na = name;
            this->k = kor;
            this->e = eng;
            this->m = math;
        }
        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    return make_tuple(a.k, a.e, a.m) > make_tuple(b.k, b.e, b.m);
}

int main() {
    cin >> n;

    Student students[n];
    for(int i = 0; i < n; i++) {
        cin >> name >> kor >> eng >> math;
        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students + n, cmp);

    for(int j = 0; j < n; j++) {
        cout << students[j].na << " " << students[j].k << " " << students[j].e << " " << students[j].m << "\n";
    }
    
    return 0;
}