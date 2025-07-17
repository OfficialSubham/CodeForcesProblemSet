#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string num;
    cin >> num;
    vector<int> numberArray;
    
    for(int i = 0; i < 2*n ;i++) {
        int digit = num[i] - '0';
        numberArray.push_back(digit);
    }

    sort(numberArray.begin(), numberArray.end() - n);
    sort(numberArray.end() - n, numberArray.end());

    cout << endl;
    int i = 0;
    int j = n;
    
    bool isUnlucky = true;
    
    bool isGreater = false;
    
    while(i <= n && j < numberArray.size()) {
        if(numberArray[i] == numberArray[j]) {
            isUnlucky = false;
            break;
        }
        else if(i == 0) {
            if(numberArray[i] > numberArray[j]) {
                isGreater = true;
            }
            else {
                isGreater = false;
            }
            i++;
            j++;
        }
        else if(isGreater && numberArray[i] > numberArray[j]) {
            i++;
            j++;
        }
        else if(!isGreater && numberArray[i] < numberArray[j]) {
            i++;
            j++;
        }
        else {
            isUnlucky = false;
            break;
        }
        
        
    }
    
    if(isUnlucky) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    
    return 0;
    
}
