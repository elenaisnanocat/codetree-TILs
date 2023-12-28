#include <iostream>
#include <string>


using namespace std;

int n;
string name, addr, city;

class Person {
    public:
        string na, ad, ci;
        //int ad;

        Person(string name, string addr, string city) {
            this->na = name;
            this->ad = addr;
            this->ci = city;
        }
        
        Person() {}
};

int main() {
    int n;
    cin >> n;

    Person persons[n];
    int last_idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> name >> addr >> city;
        persons[i] = Person(name, addr, city);
        if(persons[i].na > persons[last_idx].na)
            last_idx = i;
    }
    //cout << last_idx;
    cout << "name " << persons[last_idx].na << "\n";
    cout << "addr " << persons[last_idx].ad << "\n";
    cout << "city " << persons[last_idx].ci;

    

    return 0;
}