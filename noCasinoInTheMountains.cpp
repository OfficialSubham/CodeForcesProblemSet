#include <bits/stdc++.h>
using namespace std;


long long totalHikes(vector<int> &days, int k) {
    int totalDaysOfHiking = 0;
    bool needToTakeABreak = false;
    for(int i = 0; i < days.size(); i++) {
        if(days[i] == 1 || needToTakeABreak) {
            needToTakeABreak = false;
            continue;
        }
        bool isHikeCompleted = false;
        for(int j = i; j <= (i+k-1); j++) {
            if(j >= days.size()) break;
            if(days[j] == 1) {
                i = j;
                break;
            }
            if(j == (i + k - 1)) {
                i=j;
                isHikeCompleted = true;
                break;
            }
        }
        if(isHikeCompleted) {
            totalDaysOfHiking++;
            needToTakeABreak = true;
        }
    }
    return totalDaysOfHiking;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	   int n, k;
	   cin >> n >> k;
	   vector<int> days;
	   for(int i = 0; i < n; i++) {
	       int day;
	       cin >> day;
	       days.push_back(day);
	   }
	   long long totalDaysOfHiking = totalHikes(days, k);
	   cout << totalDaysOfHiking << endl;
	   
	}
	return 0;
}
