#include <bits/stdc++.h>
using namespace std;


int main() {
	int l, b;
	cin >> l >> b;
	int area = l * b;
	int sizeOfDomino = 2;
	int cnt = 0;
	for(int i = 0; i < area; i++) {
	    if((cnt + 1) * sizeOfDomino <= area) {
	        cnt++;
	    }
	    else {
	        break;
	    }
	    
	}
	cout << cnt << endl;
	return 0;
}
