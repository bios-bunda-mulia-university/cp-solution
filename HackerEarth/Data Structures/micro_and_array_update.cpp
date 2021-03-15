#include <bits/stdc++.h>

using namespace std;

int main() {
  int T; cin >> T;

  while(T--) {
    int n, bottom;
    cin >> n >> bottom;

    int arr[n];
    for(int j=0; j<n; j++) {
      cin >> arr[j];
    }

    int min = *min_element(arr, arr + n);
    cout << (((bottom - min) > 0) ? (bottom - min) : 0) << "\n";
  }

  return 0;
}
