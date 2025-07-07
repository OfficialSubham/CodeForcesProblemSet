#include <bits/stdc++.h>
using namespace std;

int main() {
	int room;
	cin >> room;
	int roomCapability = 0;
	for(int i = 1; i <=room; i++) {
	    int pi, qi;
	    cin >> pi >> qi;
	    if((pi + 2) <= qi) roomCapability++;
	}
	cout << roomCapability << endl;
	return 0;
}
