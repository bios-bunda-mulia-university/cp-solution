#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, p1, p2, p3, t1, t2, start, delta, total = 0;
  cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

  for(int i=0; i<n; ++i) {
    int l, r;
    cin >> l >> r;
    delta = l - start;
    if(i > 0)
      total += delta <= t1 ? delta * p1 : (t1 * p1 + (delta - t1 <= t2 ? (delta - t1) * p2 : (t2 * p2 + (delta - t1 - t2) * p3)));
    
    total += (r - l) * p1;
    start = r;
  }

  cout << total << "\n";

  return 0;
}
