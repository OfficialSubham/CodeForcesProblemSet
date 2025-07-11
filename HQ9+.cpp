#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool isThere = false;
	for(int i = 0; i < s.size(); i++) {
	    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
	        cout << "YES" << endl;
	        isThere = true;
	        break;
	    }
	}
	if(!isThere) cout << "NO" <<endl;
	return 0;
}
