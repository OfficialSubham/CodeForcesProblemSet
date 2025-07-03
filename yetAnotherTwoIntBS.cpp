#include <bits/stdc++.h>
using namespace std;

long long requiredMoveCnt(int &a, int b) {
    long long i = 0;
    long long j = b;
    while(i <= j) {
        long long mid = (i + j)/2;
        long long sum = (mid * 10);
        sum += a;
        if(sum >= b) j = mid - 1;
        else i = mid + 1;
    }
    
    return i;
    
}



int main() 
{
    int t;
    cin >> t;
  
    for(int i = 1; i <= t; i++) {
      int a, b;
      cin >> a >> b;
      if(a == b) {
        cout << 0 << endl;
        continue;
      }
      if(a > b ) {
        long long moveCnt = requiredMoveCnt(b , a);  
        cout << moveCnt << endl;
      }
      else {
        long long moveCnt = requiredMoveCnt(a, b);
        cout << moveCnt << endl;
      }
      
    }
    return 0;
}