#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long n;
	    cin >> n;
        vector<long long> arr;
        long long a1 = 0;
        long long greaterThn = 1;
        long long smallerThn = 0;
        for(int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            num = abs(0 - num);
            if(i == 0) {
                a1 = num;
            }
            else if(num >= a1) greaterThn++;
            else smallerThn++;
            
            arr.push_back(num);
        }
        
        if(n == 1 || n == 2) {
	        cout << "YES" << endl;
	        continue;
	    }
	    
	    int kSmallest = ((n+1)/2);
	    
	    if(greaterThn >= kSmallest) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
