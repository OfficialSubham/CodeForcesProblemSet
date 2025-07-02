#include <bits/stdc++.h>
using namespace std;


int main() {
	long long t;
	cin >> t;
	int x = 0;
	for(int i = 0; i < t; i++) {
	    string s;
	    cin >> s;
	    if(s == "++X") {
	        ++x;
	    }
	    else if(s == "X++") {
	        x++;
	    }
	    else if(s == "--X") {
	        --x;
	    }
	    else if(s == "X--") {
	        x--;
	    }
	}
	cout << x << endl;
	return 0;
}
