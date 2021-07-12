#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  vector<int> v(T);

  for(int i=0; i<T; ++i) 
    cin >> v[i];

  for(int i=0; i<T-1; ++i) {
    if(v[i] != 0) {
      while(v[i] > 0) {
        v[i]--; v[i+1]--;
      }
    }
  }

  bool isValid = true;

  for(int i=0; i<T; ++i) {
    if(v[i] != 0) {
      cout << "NO\n";
      isValid = false;
      break;
    }
  }

  if(isValid) cout << "YES\n";

  return 0;
}
