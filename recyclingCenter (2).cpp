#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, c;
	    cin >> n >> c;
	    int coin = 0;
	    vector<int> arr;
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if(num > c) {
	            coin++;
	        }
	        else {
                arr.push_back(num);
	        }
	    }
	    sort(arr.begin(), arr.end());
	    
	    int power = 0;
	    for(int i = arr.size() - 1; i >= 0; i--) {
	        long int product = arr[i] * pow(2, power);
	        if(product > c) coin++;
	        else power++;
	    }
	    
	    cout << coin << endl;
	}
    return 0;
}