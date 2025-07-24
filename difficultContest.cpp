#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    if(s == "NTT") {
	        cout << "TNT" << endl;
	        continue;
	    }
	    else if(s == "FFT") {
	        cout << "FTF" << endl;
	        continue;
	    }
	    string ans = "";
	    string remaining = "";
	    for(int i = 0; i < s.size(); i++) {
	        if(s[i] == 'T') {
	            ans += s[i];
	        }
	        else {
	            remaining += s[i];
	        }
	    }
	    
	    sort(remaining.begin(), remaining.end());
	    ans += remaining;
	    cout << ans << endl;
	    
	}

}
