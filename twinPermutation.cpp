#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int ansArr[n];
	    for(int i = 0; i < n; i++) {
	        ansArr[i] = (n + 1) - arr[i];
	    }
	    for(int i = 0; i < n; i++) {
	        cout << ansArr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;

}
