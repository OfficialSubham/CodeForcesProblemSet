#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxLevel;
    cin >> maxLevel;
    vector<bool> levelsCompleted(maxLevel + 1);
    int p1, p2;
    cin >> p1;
    
    for(int i = 0; i < p1; i++) {
        int num;
        cin >> num;
        levelsCompleted[num] = true;
    }
    cin >> p2;
    for(int i = 0; i < p2; i++) {
        int num;
        cin >> num;
        levelsCompleted[num] = true;
    }
    bool isCompleted = true;
    for(int i = 1; i <= maxLevel; i++) {
        if(levelsCompleted[i] == false) {
            isCompleted = false;
            cout << "Oh, my keyboard!" << endl;
            break;
        }
    }
    if(isCompleted) cout << "I become the guy." << endl;
	return 0;

}
