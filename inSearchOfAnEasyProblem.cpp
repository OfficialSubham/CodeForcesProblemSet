#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool isEasy = true;
	for(int i = 0; i < n; i++) {
	    int num;
	    cin >> num;
	    if(num == 1) {
	        cout << "HARD" << endl;
	        isEasy = false;
	        break;
	    }
	}
	
	if(isEasy) cout << "EASY" << endl;
	
	return 0;

}
