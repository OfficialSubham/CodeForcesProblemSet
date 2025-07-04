#include <bits/stdc++.h>
using namespace std;

bool removeSmallest(vector<int> arr) {
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] - arr[i - 1] > 1) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        bool isPossible = removeSmallest(arr);
        if(isPossible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
