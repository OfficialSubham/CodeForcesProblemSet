#include <bits/stdc++.h>
using namespace std;

int main() {
    int wordLen;
    cin >> wordLen;
    if(wordLen < 26) {
        cout << "NO" <<endl;
        return 0;
    }
    vector<bool> hashMap(26, false);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        int digitChar = tolower(s[i]) - 'a';
        hashMap[digitChar] = true;
    }
    bool isCompleted = true;
    for(int i = 0; i < hashMap.size(); i++) {
        if(hashMap[i] == false) {
            cout << "NO" << endl;
            isCompleted = false;
            break;
        }
    }
    if(isCompleted) cout << "YES" << endl;
	return 0;

}
