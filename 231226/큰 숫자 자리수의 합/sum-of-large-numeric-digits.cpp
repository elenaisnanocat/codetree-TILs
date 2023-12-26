#include <iostream>

using namespace std;

int a, b, c, num, sum;

int NumToSum(int num) {
    if(num / 10 == 0) {
        sum += num % 10;
        return sum;
    }
    int val = num % 10;
    sum += val;
    if(num / 10 > 0) 
        return NumToSum(num / 10);
}

int main() {
    cin >> a >> b >> c;

    num = a * b * c;

    cout << NumToSum(num);
    

    return 0;
}