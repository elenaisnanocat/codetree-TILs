#include <iostream>
#include <string>

using namespace std;

class Product{
    public:
        string pn;
        int cd;

        Product(string pname, int pcode) {
            this->pn = pname;
            this->cd = pcode;
        }
        Product() {}
};

int main() {
    Product product1 = Product();
    Product product2 = Product();

    product1.pn = "codetree";
    product1.cd = 50;

    string pname;
    int pcode;

    cin >> pname >> pcode;

    product2.pn = pname;
    product2.cd = pcode;

    cout << "product " << product1.cd << " is " << product1.pn << "\n";
    cout << "product " << product2.cd << " is " << product2.pn;

    return 0;
}