#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	unordered_map<char, int> hashMap;
	int cnt = 0;
	for(int i = 0; i < s.size(); i++) {
	    if(hashMap.find(s[i]) == hashMap.end()) {
	        cnt++;
	        hashMap[s[i]] = 1;
	    }
	}
	if(cnt % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	
	return 0;
	
}
