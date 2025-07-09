#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int cntOdd = 0;
	    int cntEven = 0;
	    for(int i = 0; i < 2 * n; i++) {
	        int num;
	        cin >> num;
	        if(num % 2 == 0) cntOdd++;
	        else cntEven++;
	    }
	    if(cntEven == cntOdd) cout << "Yes" << endl;
	    else cout << "No" << endl; 
	}

}
