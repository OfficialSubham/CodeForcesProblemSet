#include <bits/stdc++.h>
using namespace std;

int main() {
    int games;
    cin >> games;
	string word;
	cin >> word;
	int cntA = 0;
	int cntD = 0;
	for(int i = 0; i < games; i++) {
	    if(word[i] == 'A') cntA++;
	    else cntD++;
	}
	if(cntA == cntD) cout << "Friendship" << endl;
	else if(cntA > cntD) cout << "Anton" << endl;
	else cout << "Danik" << endl;
	return 0;
}
