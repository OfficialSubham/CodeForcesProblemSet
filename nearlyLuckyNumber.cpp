#include <bits/stdc++.h>
using namespace std;

bool isNearlyLucky(long long &num) {
    int cnt = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        if(lastDigit == 7 || lastDigit == 4) cnt++;
        num /= 10;
    }
    if(cnt == 7 || cnt == 4) return true;
    return false;
}

int main() {
    long long num;
    cin >> num;
    
    bool isLucky = isNearlyLucky(num);
    if(isLucky) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}
