#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if(n == 1 || n % 2 == 1) {
	    cout << -1 << endl;
	    return 0;
	}
	
	for(int i = 0; i < n; i++) {
	    cout << n - i << " ";
	}
	
	cout << endl;
	
	return 0;
}
