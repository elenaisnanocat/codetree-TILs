#include <iostream>
#include <string>

using namespace std;

class Game {
    public:
        string id;
        int lv;

        Game(string ch_id = "codetree", int ch_lv = 10) {
            this->id = ch_id;
            this->lv = ch_lv;
        }
};

int main() {
    string ch_id;
    int ch_lv;

    cin >> ch_id >> ch_lv;

    Game game1 = Game();
    cout << "user " << game1.id <<" lv " << game1.lv << "\n";

    game1.id = ch_id;
    game1.lv = ch_lv;

    cout << "user " << game1.id << " lv " << game1.lv;
    
    return 0;
}