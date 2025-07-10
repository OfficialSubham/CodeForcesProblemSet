#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<int> pillars;
	for(int i =0; i < n; i++) {
	    long num;
	    cin >> num;
	    pillars.push_back(num);   
	}
	sort(pillars.begin(), pillars.end());
	for(int i = 0; i < n; i++) {
	    cout << pillars[i] << " ";
	}
	return 0;

}
