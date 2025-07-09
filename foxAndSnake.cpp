#include <bits/stdc++.h>
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	bool first = false;
	for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        if(i % 2 == 0) {
	            cout << "#";
	        }
	        else {
	            if(first && j == 0) {
                    cout << "#";
         
                }
                else if(j == col-1 && !first) {
                    cout << "#";
                    
                }
                else cout << ".";
	        }
	    }
	    if(i % 2 != 0) first = !first;
	    cout << endl;
	}
    return 0;
}
