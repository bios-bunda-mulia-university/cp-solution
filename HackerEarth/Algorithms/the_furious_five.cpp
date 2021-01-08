#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll divideableByFive(ll num) {
  ll residue = 0;
  while(num) {
    residue += num / 5;
    num /= 5;
  }
  return residue;
}

ll findAnswer(ll num) {
  ll low = 5;
  ll high = 1e10;

  ll ans = high;

  while(low <= high) {
    ll mid = low + (high - low) / 2;
    ll residue = divideableByFive(mid);
    if(residue >= num) {
      high = mid - 1;
      ans = mid;
    } else {
      low = mid + 1;
    }
  }

  return ans;
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    ll num;
    cin >> num;

    cout << findAnswer(num) << "\n";
  }
  return 0;  
}
