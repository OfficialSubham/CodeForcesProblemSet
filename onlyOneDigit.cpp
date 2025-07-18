#include <bits/stdc++.h>
using namespace std;

int giveLeastDigit(int num) {
    int leastDigit = INT_MAX;
    while(num > 0) {
        int digit = num % 10;
        leastDigit = min(leastDigit, digit);
        num /= 10;
    }
    return leastDigit;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int num;
	    cin >> num;
	    int leastDigit = giveLeastDigit(num);
	    cout << leastDigit << endl;
	}
	return 0;
}
