#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int, int> hashMap;
        int lastNum = 0;
        bool isAllSame = true;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if(i == 0) lastNum = num;
            hashMap[num]++;
            if(lastNum != num) isAllSame = false; 
        }
        if(n == 2 || isAllSame) {
            cout << "YES" << endl;
            continue;
        }
 
        int cntSingleElm = 0;
        bool isPossible = true;
        for(auto it : hashMap) {
            if(it.second == 1) cntSingleElm++;
            if(it.second > ((n + 1)/2)) {
                isPossible = false;
                break;
            }
        }
        if(cntSingleElm == 1 && n == 3) {
            cout << "YES" << endl;
        }
        else if(!isPossible || (isPossible && cntSingleElm >= 1)) {
            cout << "NO" << endl;
        }
      
        else {
            cout << "YES" << endl;
        }
        
        
    }
    return 0;
}
