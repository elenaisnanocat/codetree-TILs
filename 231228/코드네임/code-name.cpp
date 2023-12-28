#include <iostream>

using namespace std;

class Person {
    public:
        char c_n;
        int s_;

        Person(char codename, int score) {
            this->c_n = codename;
            this->s_ = score;
        }
        Person() {}
};

int main() {
    Person persons[5];
    int minscore = 101, who = 0;
    for(int i = 0; i < 5; i++) {
        char codename;
        int score;
        cin >> codename >> score;
        persons[i] = Person(codename, score);
        if(persons[i].s_ < minscore) {
            minscore = persons[i].s_;
            who = i;
        }
    }
    cout << persons[who].c_n << " " << minscore;
    
    return 0;
}