#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(a >= b) {
            cout << a << endl;
        }
        else {
            int remain = b - a;
            int actualDeposit = a - remain;
            if(actualDeposit <= 0) cout << 0 << endl;
            else cout << actualDeposit << endl;
        }
    }
    return 0;
}
