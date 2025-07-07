#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
	    unordered_map<int, int> hashMap;
	    int bulbNo;
	    cin >> bulbNo;
	    for(int i = 1; i <= bulbNo; i++) {
	        int s1, s2;
    	    cin >> s1 >> s2;
    	    hashMap[s1]++;
    	    hashMap[s2]++;
	    }
    	cout << (hashMap[1] % 2 == 0 ? 0 : 1) << " " << min(hashMap[0], hashMap[1]) << endl; 
	}
	return 0;
}
