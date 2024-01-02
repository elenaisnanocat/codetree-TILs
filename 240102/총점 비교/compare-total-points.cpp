#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string name;
int n, a, b, c;

class Student {
    public:
        string na;
        int a, b, c;
        Student(string name, int a, int b, int c) {
            this->na = name;
            this->a = a;
            this->b = b;
            this->c = c;
        }
        Student() {}
};

bool cmp(const Student &aa, const Student &bb) {
    return  aa.a + aa.b + aa.c < bb.a + bb.b + bb.c; 
}

int main() {
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++) {
        cin >> name >> a >> b >> c;
        students[i] = Student(name, a, b, c);
    }
    sort(students, students + n, cmp);

    for(int j = 0; j < n; j++) {
        cout << students[j].na << " " << students[j].a << " " << students[j].b << " " << students[j].c << "\n";
    }

    return 0;
}