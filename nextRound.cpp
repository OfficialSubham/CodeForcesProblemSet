#include <bits/stdc++.h>
using namespace std;


int main() {
	int t, k;
	cin >> t;
	cin >> k;
	int minScore;
	vector<int> arr;
	for(int i = 0; i < t; i++) {
	    int num;
	    cin >> num;
	    if(i == k - 1) {
	        minScore = num;
	    }
	    arr.push_back(num);
	}
	int cnt = 0;
	for(int num : arr) {
	    if(num >= minScore && num > 0) {
	        cnt++;
	    }
	}
	cout << cnt << endl;
	return 0;
}
