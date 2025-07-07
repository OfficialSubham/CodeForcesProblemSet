#include <bits/stdc++.h>
using namespace std;

string giveNewString(string a, string b) {
    string ans = "";
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) ans += "1";
        else if(a[i] == b[i]) ans += "0";
    }
    return ans;
}

int main() {
 
    string a, b;
    cin >> a >> b;
    string ans = giveNewString(a, b);
    cout << ans << endl;
  
    return 0;
}
