#include <bits/stdc++.h>
using namespace std;

long long movesTaken(long long a, long long b) {
    int remainder = a % b;
    int toAdd = (b - remainder) % b;
    return toAdd;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	   long long a, b;
	   cin >> a >> b;
	   if(a % b == 0) {
	        cout << 0 << endl;
	        continue;
	   }
	   long long moves = movesTaken(a, b);
	   cout << moves << endl;
	   
	}
	return 0;
}
