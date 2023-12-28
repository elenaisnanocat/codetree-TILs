#include <iostream>
#include <string>

using namespace std;

string code;
char color;
int second;

class Bomb {
    public:
        string cd;
        char cl;
        int sec;
        
        Bomb(string code, char color, int second) {
            this->cd = code;
            this->cl = color;
            this->sec = second;
        }
        Bomb() {}
};

int main() {
    cin >> code >> color >> second;

    Bomb bom = Bomb(code, color, second);
    cout << "code : " << bom.cd << "\n";
    cout << "color : " << bom.cl << "\n";
    cout << "second : " << bom.sec;

    return 0;
}