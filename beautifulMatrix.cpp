#include <bits/stdc++.h>
using namespace std;

int giveReqNumOfMove(vector<vector<int>> &mat) {
    int row = -1;
    int col = -1;
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    
    int centRow = 2;
    int centCol = 2;
    
    if(row - centRow < 0) {
        row = centRow - row;
    }
    else {
        row -= centRow;
    }
    
    if(col - centCol < 0) {
        col = centCol - col;
    }
    else {
        col -= centCol;
    }
    
    return row + col;
    
}

int main() {
	// your code goes here
    vector<vector<int>> mat;
    
    for(int i = 0; i < 5; i++) {
        vector<int> temp;
        for(int j = 0; j < 5; j++) {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        mat.push_back(temp);
    }
    
    int reqNumOfMove = giveReqNumOfMove(mat);
    
    cout << reqNumOfMove << endl;
    
    return 0;
    
    
}
