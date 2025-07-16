#include <bits/stdc++.h>
using namespace std;

bool isEquilibrium(vector<vector<int>> &matrix) {
    long long num1 = 0;
    long long num2 = 0;
    long long num3 = 0;
    for(int i = 0; i < matrix.size(); i++) {
        num1 += matrix[i][0];
        num2 += matrix[i][1];
        num3 += matrix[i][2];
    }
    if(num1 == 0 && num2 == 0 && num3 == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for(int i = 0; i < n; i++) {
        vector<int> temp;
        for(int j = 0; j < 3; j++) {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        matrix.push_back(temp);
    }
    
    bool equilibrium = isEquilibrium(matrix);
    if(equilibrium) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
    

}
