#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";
    ans += isupper(s[0]) ? tolower(s[0]) : toupper(s[0]);
    bool isSatisfy = true;
    for(int i = 1; i < s.size(); i++) {
        if(isupper(s[i])) ans += tolower(s[i]);
        else {
            isSatisfy = false;
            break;
        }
    }
    if(isSatisfy) cout << ans << endl;
    else cout << s << endl;
    return 0;
}
