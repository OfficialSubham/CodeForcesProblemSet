#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int row, col;
        cin >> row >> col;
        if((row >= 2 && col >= 3) || (row >= 3 && col >= 2)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
