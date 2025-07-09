#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, ith;
	cin >> n >> ith;
    long long cnt = (n + 1)/2;
    if(ith <= cnt) {
        long long num = (2 * ith) - 1;
        cout << num << endl;
    }
    else {
        long long num = (n + 1)/2;
        num = ith - num;
        num *= 2;
        cout << num << endl;
    }
    return 0;

}
