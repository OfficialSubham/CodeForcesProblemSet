#include <bits/stdc++.h>
using namespace std;

void printRoundNum(long long num) {
    int zeros = 0;
    vector<int> temp;
    while(num) {
        int rem = num % 10;
        if(rem > 0) {
            int number = pow(10, zeros);
            temp.push_back(number*rem);
        }
        
        zeros++;
        num /= 10;
    }
    
    cout << temp.size() << endl;
    for(int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
    return;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        printRoundNum(num);
    }
}
