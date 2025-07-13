#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	unordered_set<char> hashSet;
	for(int i = 0; i < s.size(); i++) {
	    if(isalpha(s[i])) {
	        hashSet.insert(s[i]);
	    }
	}
	
	cout << hashSet.size() << endl;
	return 0;

}
