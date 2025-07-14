#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> hashMap;
    for(int i = 0; i < n - 1; i++) {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        hashMap[temp]++;
    }
    int freq = 0;
    string ans = "";
    for(auto it : hashMap) {
        if(it.second > freq) {
            ans = it.first;
            freq = it.second;
        }
    }
    cout << ans << endl;
    return 0;
}
