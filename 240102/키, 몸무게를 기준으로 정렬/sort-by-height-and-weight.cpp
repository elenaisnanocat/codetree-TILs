#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, h, w;
string name;

class Person {
    public:
        string na;
        int h, w;

        Person(string name, int h, int w) {
            this-> na = name;
            this-> h = h;
            this-> w = w;
        }
        Person() {}
};

bool cmp(const Person &a, const Person &b) {
    if(a.h == b.h) {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    cin >> n;
    Person persons[n];
    for(int i = 0; i < n; i++) {
        cin >> name >> h >> w;
        persons[i] = Person(name, h, w);
    }

    sort(persons, persons + n, cmp);
    for(int j = 0; j < n; j++) {
        cout << persons[j].na;
    }

    return 0;
}