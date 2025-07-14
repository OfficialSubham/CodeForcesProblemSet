#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> hashMap;
    hashMap['a'] = 1;
    hashMap['e'] = 1;
    hashMap['i'] = 1;
    hashMap['o'] = 1;
    hashMap['u'] = 1;
    hashMap['y'] = 1; 
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++) {
        char currentChar = tolower(s[i]);
        if(hashMap[currentChar]) continue;
        cout << "." << currentChar;
    }
    cout << endl;
    
    return 0;
}
