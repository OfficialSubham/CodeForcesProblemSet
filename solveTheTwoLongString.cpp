#include <bits/stdc++.h>
using namespace std;

string giveNewString(string s) {
    int n = s.size();
    string firstChar = string(1, s[0]);
    string lastChar = string(1, s[n-1]);
    string remainCharCnt = to_string(n - 2);
    
    return firstChar + remainCharCnt + lastChar;
}

int main() {
	long long t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    string s;
	    cin >> s;
	    if(s.size() <= 10) {
	        cout<< s << endl;
	        continue;
	    }
	    string newWord = giveNewString(s);
	    cout<< newWord << endl;
	}
	return 0;
}
