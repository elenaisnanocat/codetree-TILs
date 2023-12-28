#include <iostream>
#include <string>

using namespace std;

class Meeting {
    public:
        int t;
        string c;
        char l;

        Meeting(string code, char location, int time) {
            this->c = code;
            this->l = location;
            this->t = time;
        }
};

int main() {
    string code;
    char location;
    int time;

    cin >> code >> location >> time;
    Meeting meeting1 = Meeting(code, location, time);
    cout << "secret code : " << meeting1.c << "\n";
    cout << "meeting point : " << meeting1.l << "\n";
    cout << "time : " << meeting1.t;
    return 0;
}