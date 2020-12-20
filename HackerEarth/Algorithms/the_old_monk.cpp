#include <bits/stdc++.h>

using namespace std;

int getMonkinessIndex(long long arr[], int length, long long number) {
  int low = 0;
  int high = length - 1;
  int middle = (low + high) / 2;

  while(low <= high) {
    if(arr[middle] >= number)
      low = middle + 1;
    else
      high = middle - 1;

    middle = (low + high) / 2;
  }

  return high;
}

int main() {
  int T;

  cin >> T;
  while(T--) {
    int n, input;
    cin >> n;

    long long A[n], B[n];

    for(int i=0; i<n; i++) {
      cin >> A[i];
    }

    for(int i=0; i<n; i++) {
      cin >> B[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
      int index = getMonkinessIndex(B, n, A[i]);
      if(index - i > ans) {
        ans = index - i;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
