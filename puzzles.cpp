#include <bits/stdc++.h>
using namespace std;

int main() {
    long long need, selling;
    cin >> need >> selling;
    vector<long long> arr;
	for(int i = 0; i < selling; i++) {
	    long long num;
	    cin >> num;
	    arr.push_back(num);
	}
	sort(arr.begin(), arr.end());
	long long ans = INT_MAX;

    for(int i = 0; i <= selling - need; i++) {
        long long mini = arr[i];
        
        long long maxi = arr[(i + need - 1)];
        
        ans = min((maxi - mini), ans);
    }
    cout << ans << endl;
	
	return 0;

}
