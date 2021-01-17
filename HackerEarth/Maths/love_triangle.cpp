#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {

  ll n;
  
  while(cin >> n) {
    string ans;
    if(n == 0) ans = "0";
    
    while(n) {
      ans.push_back((n % 9) + '0');
      n /= 9;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
  }

  return 0;
}
