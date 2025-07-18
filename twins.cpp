#include <bits/stdc++.h>
using namespace std;

long long giveSum(vector<int> &coins, int start, int end) {
    if(end < 0) return 0;
    long long sum = 0;
    for(int i = start; i <= end; i++) {
        sum += coins[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> coins;
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        coins.push_back(num);
    }
    
    sort(coins.begin(), coins.end());
    
    int ans = -1;
    
    for(int i = n-1; i >= 0; i--) {
        long long myCoinSum = giveSum(coins, i, n-1);
        long long brotherCoinSum = giveSum(coins, 0, i - 1);
        if(myCoinSum > brotherCoinSum) {
            ans = n - i;
            break;
        } 
    }
    
    cout << ans << endl;
    
    return 0;
    
}
