#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
  int T;
  cin >> T;
  ll a, b, c, k;
  while(T--) {
    cin >> a >> b >> c >> k;
    for(int i=0; ; ++i) {
      if((a * pow(i, 2) + b * i + c) >= k) {
        cout << i << "\n";
        break;
      }
    }
  }

  return 0;
}