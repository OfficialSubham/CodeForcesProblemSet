#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<char> hashArray = {'h', 'e', 'l', 'l', 'o'};
    string ans = "";
    int current = 0;
    for(int i = 0; i < s.size(); i++) {
        if(ans == "hello") break;
        else if(current < hashArray.size() && hashArray[current] == s[i]) {
            ans += s[i];
            current++;
        }
        else if(ans.back() == s[i]) continue;
    }
    if(ans == "hello") cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
