#include <bits/stdc++.h>
using namespace std;

int main() {
    int magnets;
    cin >> magnets;
    int groups = 0;
    string previousMagnet = "";
    for(int i = 0; i < magnets; i++) {
        string poles;
        cin >> poles;
        if(previousMagnet != poles) {
            groups++;
        }
        previousMagnet = poles;
    }
    cout << groups << endl;
	return 0;
}
