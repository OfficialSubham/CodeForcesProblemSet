#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	cin >> len;
	int firstNum;
	cin >> firstNum;
	int cntPoints = 0;
	int maxi = firstNum;
	int mini = firstNum;
	for(int i = 1; i < len; i++) {
	    int num;
	    cin >> num;
	    if(num > maxi) {
	        maxi = num;
	        cntPoints++;
	    }
	    else if(num < mini) {
	        mini = num;
	        cntPoints++;
	    }
	}
	
	cout << cntPoints << endl;
	
	return 0;

}
