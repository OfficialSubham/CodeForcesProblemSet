#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int tankCapacity = 0;
        int lastPoint = 0;
        for(int i = 0; i < n; i++) {
            int cords;
            cin >> cords;
            tankCapacity = max(tankCapacity, cords - lastPoint);
            lastPoint = cords;
            
            if(i == n-1) {
                int dis = 2*(x- cords);
                tankCapacity = max(tankCapacity, dis);
            }
        }
        cout << tankCapacity << endl;
        
    }
    return 0;
}
