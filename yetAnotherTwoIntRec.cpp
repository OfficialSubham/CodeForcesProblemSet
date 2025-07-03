#include <bits/stdc++.h>
using namespace std;

int requiredMoveCntPos(int &a, int b) {
  if(a >= b) return 0;
  int moveCnt = 0;
  a += 10;
  moveCnt += requiredMoveCntPos(a, b);
  moveCnt++;
  return moveCnt;
}

int requiredMoveCntNeg(int &a, int b) {
  if(a <= b) return 0;
  int moveCnt = 0;
  a -= 10;
  moveCnt += requiredMoveCntNeg(a, b);
  moveCnt++;
  return moveCnt;
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
        int moveCnt = requiredMoveCntNeg(a , b);  
        cout << moveCnt << endl;
      }
      else {
        int moveCnt = requiredMoveCntPos(a, b);
        cout << moveCnt << endl;
      }
      
    }
    return 0;
}