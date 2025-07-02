#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int contests;
	cin >> contests;
	int attempted = 0;
	for(int i = 0; i < contests; i++) {
	    int takingPart = 0;
	    for(int j = 0; j < 3; j++) {
	        int isAttempted;
	        cin >> isAttempted;
	        if(isAttempted == 1) {
	            takingPart++;
	        }
	    }
	    if(takingPart >= 2) {
	        attempted++;
	    }
	}
	
	cout << attempted << endl;
	
	return 0;

}
