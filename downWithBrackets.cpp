#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    bool isChange = false;
	    bool isPossible = false;
	    int bracket = 0;
	    
	    for(int i = 0; i < s.size(); i++) {
	        if(s[i] == '(') {
	            bracket++;
	            if(isPossible) {
	                isChange = true;
	                break;
	            }
	        }
	        else {
	            bracket--;
	            if(bracket == 0) {
	                isPossible = true;
	            }
	        }
	    }
	    if(isChange) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;

}
