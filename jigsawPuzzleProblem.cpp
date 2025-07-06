#include <bits/stdc++.h>
using namespace std;

bool isHappy(long long sum) {
    if(sum <= 0) return false;
    long long root = sqrt(sum);
    if(root % 2 == 0) return false;
    return root * root == sum;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int day;
	    cin >> day;
	    long long sum = 0;
	    int happyDays = 0;
	    for(int i = 0; i < day; i++) {
	        int placingBlocks;
	        cin >> placingBlocks;
	        sum += placingBlocks;
	        bool happy = isHappy(sum);
	        if(happy) happyDays++;
	    }
	    cout << happyDays << endl;
	}
	return 0;
}
