#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = 0;
    int currentStreak = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'x') {
            currentStreak++;
        }
        else if(currentStreak > 2) {
            ans += (currentStreak - 2);
            currentStreak = 0;
        }
        else {
            currentStreak = 0;
        }
    }
    if(currentStreak > 2) {
        ans += (currentStreak - 2);
    }
    cout << ans << endl;
    
    return 0;

}
