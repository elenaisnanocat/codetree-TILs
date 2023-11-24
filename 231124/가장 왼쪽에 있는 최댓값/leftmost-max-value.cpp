#include <iostream>

#define MAX_N 1000

using namespace std;

int main() {
    int n;
    int arr[MAX_N];

    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    int pm_idx = n;

    while(1) {
        int m_idx = 0;
        for(int i = 1; i < pm_idx; i++)
            if(arr[i] > arr[m_idx]) m_idx = i;

        cout << m_idx + 1 << " ";

        if(m_idx == 0) break;

        pm_idx = m_idx; 
    }

    return 0;
}