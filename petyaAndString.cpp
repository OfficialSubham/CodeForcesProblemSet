#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int n = min(s.size(), t.size());
	bool isSame = false;
	for(int i = 0; i < n; i++) {
	    if(tolower(s[i]) == tolower(t[i]) && i != n - 1) {
	        continue;
	    }
	    else if(tolower(s[i]) < tolower(t[i])) {
	        cout << "-1" << endl;
            break;
	    }
	    else if(tolower(s[i]) > tolower(t[i])) {
	        cout << "1" << endl;
	        break;
	        
	    }
	    isSame = true;
	}
	if(isSame) cout << "0" << endl;
	return 0;
	
}
