#include <iostream>

#define MAX_NUM 1000

using namespace std;

int main() {
    int n;
    int price[MAX_NUM];

    cin >> n;
    for(int i = 0; i < n; i++) cin >> price[i];

    int max_profit = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            int profit = price[j] - price[i];

            if(profit > max_profit)
                max_profit = profit;
        }
    }
    cout << max_profit;

    return 0;
}