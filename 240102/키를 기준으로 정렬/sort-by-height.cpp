#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, height, weight;
string name;

class Person {
    public:
        string na;
        int h, w;

        Person(string name, int height, int weight) {
            this->na = name;
            this->h = height;
            this->w = weight;
        }
        Person() {}
};

bool cmp(const Person &a, const Person &b) {
    return a.h < b.h;
}

int main() {
    cin >> n;
    Person person[n];
    for(int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        person[i] = Person(name, height, weight);
    }

    sort(person, person + n, cmp);
    
    for(int j = 0; j < n; j++) {
        cout << person[j].na << " " << person[j].h << " " << person[j].w << "\n";
    }

    return 0;
}