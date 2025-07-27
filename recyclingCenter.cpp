#include <bits/stdc++.h>
using namespace std;

bool giveLesserThanMax(vector<int>& arr, int power, int target) {
    long long maxi = INT_MIN;
    int idx = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == -1) continue;
        long long number = arr[i] * pow(2, power);
        if(number <= target) {
            if(number > maxi) {
                maxi = number;
                idx = i;
            }
        }
    }
    if(idx != -1) {
        arr[idx] = -1;
        return true;
    }
    return false;
}

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
	    for(int i = 0; i < arr.size(); i++) {
	        bool isPossible = giveLesserThanMax(arr, i, c);
	        if(!isPossible) coin++;
	    }
	    cout << coin << endl;
	}
    return 0;
}
