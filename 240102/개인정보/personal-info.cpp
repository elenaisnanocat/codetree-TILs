#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string name;
int height;
double weight;

class Person {
    public:
        string na;
        int h;
        double w;

        Person(string name, int height, double weight) {
            this-> na = name;
            this-> h = height;
            this-> w = weight;
        }
        Person() {}
};

bool cmpname(const Person &a, const Person &b) {
    return a.na < b.na;
}

bool cmph(const Person &a, const Person &b) {
    return a.h > b.h;
}


int main() {
    Person persons[5];
    for(int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        persons[i] = Person(name, height, weight);
    }

    sort(persons, persons + 5, cmpname);
    cout << "name" << "\n";
    for(int i = 0; i < 5; i++) {
        cout << persons[i].na << " " << persons[i].h << " " << persons[i].w << "\n";
    }
    cout << "\n" << "height" << "\n";
    sort(persons, persons + 5, cmph);
     for(int i = 0; i < 5; i++) {
        cout << persons[i].na << " " << persons[i].h << " " << persons[i].w << "\n";
    }

    return 0;
}