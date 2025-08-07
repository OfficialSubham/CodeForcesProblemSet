#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    string s;
	    cin >> n >> s;
	    int cntTotalDot = 0;
	    int cntStreak = 0;
	    bool isThereAStreak = false;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '.') {
	            cntStreak++;
	            cntTotalDot++;
	        }
	        else if(s[i] == '#') {
	            cntStreak = 0;
	        }
	        if(cntStreak == 3) {
	            isThereAStreak = true;
	            cout << 2 << endl;
	            break;
	        }
	        
	       
	    }
	    if(!isThereAStreak) cout << cntTotalDot << endl;
	}
    return 0;
}
