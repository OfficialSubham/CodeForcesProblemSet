#include <bits/stdc++.h>
using namespace std;

vector<int> takeInput(int n) {
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    return arr;
}

bool iterateInArray(vector<int> &arr1, vector<int> &arr2){
    bool firstMove = false;
    bool secondMove = false;
    for(int i = 0; i < arr1.size(); i++) {
        if(arr1[i] > arr2[i]) {
            arr1[i] -= 1;
            firstMove = true;
            break;
        }
    }
    
    if(!firstMove) return firstMove;
    
    for(int i = 0; i < arr1.size(); i++) {
        if(arr1[i] < arr2[i]) {
            arr1[i] += 1;
            break;
        }
    }
    
    return firstMove;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr1 = takeInput(n);
        vector<int> arr2 = takeInput(n);
        int cnt = 0;
        bool isDone = false;
        while(true) {
            bool firstArray =  iterateInArray(arr1, arr2);
            cnt += 1;
            if(!firstArray) {
                cout << cnt << endl;
                isDone = true;
                break;
            }
        }
        if(!isDone) cout << cnt << endl;
        
    }
    
    return 0;

}
