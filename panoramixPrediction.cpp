#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num == 2 || num == 3) return true;
    
    int sqrtOfNum = sqrt(num);
    for(int i = 2; i <= sqrtOfNum; i++) {
        if(num%i == 0) return false;
    }
    return true;
}

int main() {
	int first, second;
	cin >> first >> second;
    
    
    if(!isPrime(second)) {
        cout << "NO" << endl;
        return 0;
    }
    
    bool isAns = false;
    
    for(int i = first + 1; i <= second; i++) {
        if(isPrime(i)) {
            if(i == second) {
                isAns = true;
            }
            break;
        }
    }
    
    if(isAns) cout << "YES" << endl;
    else cout << "NO" << endl;
	
	return 0;
}
