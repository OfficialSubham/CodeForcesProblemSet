#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> hashMap;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(hashMap.find(s) == hashMap.end()) {
            cout << "NO" << endl;
            hashMap[s] == 1;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
