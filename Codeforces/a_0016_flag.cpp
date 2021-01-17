#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;

  char flagHead, flagTail, flagTemp = 0;

  bool isValid = true;

  cin >> n >> m;

  for(int i=0; i<n; i++) {
    cin >> flagHead;
    if(flagHead == flagTemp) isValid = false;
    flagTemp = flagHead;
    for(int j=1; j<m; j++) {
      cin >> flagTail;
      if(flagTail != flagTemp) isValid = false;
    }
  }

  cout << (isValid == false ? "NO" : "YES") << "\n";

  return 0;
}
