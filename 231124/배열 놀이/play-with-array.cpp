#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[100];

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < q; i++) {
        int q_ty;
        cin >> q_ty;

        if(q_ty == 1) {
            int a;
            cin >> a;

            cout << arr[a - 1] << "\n";
        }
        else if(q_ty == 2) {
            int a;
            cin >> a;

            int idx = -1;
            for(int j = 0; j < n; j++) {
                if(arr[j] == a) {
                    idx = j;
                    break;
                }
            }
            cout << idx + 1 << "\n";
        }
        else{
            int a, b;
            cin >> a >> b;

            for(int k = a - 1; k < b; k++) {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}