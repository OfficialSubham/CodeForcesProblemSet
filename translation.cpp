#include <bits/stdc++.h>
using namespace std;

int main() {
    bool isSame = true;
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()) {
        cout << "NO" << endl;
        return 0;
    }
    
    int i = 0;
    int j = s1.size() -1;
    while(s1[i] == s2[j] && i < s1.size() && j >= 0) {
        i++;
        j--;
    }
    
    if(i == s1.size() && j == -1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
