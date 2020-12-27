#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> list;
  vector<double> avg;

  double input;
  for(int i=0; i<n; i++) {
    cin >> input;
    list.push_back(input);
  }
  sort(list.begin(), list.end());
  double sum = 0.0;
  for(int i=1; i<=n; i++) {
    sum += list[i-1];
    avg.push_back(sum / double(i));
  }

  int q;
  cin >> q;

  vector<double>::iterator it;
  while(q--) {
    cin >> input;
    it = lower_bound(avg.begin(), avg.end(), input);
    int position = it - avg.begin();
    cout << position << "\n";
  }

  return 0;
}
