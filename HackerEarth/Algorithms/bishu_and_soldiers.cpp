#include <bits/stdc++.h>

using namespace std;

int searchIndex(int arr[], int n, int key) {
  int index = -1;
  int low = 0, high = n-1;
  while(low <= high) {
    int mid = (low + high) / 2;
    if(arr[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
      index = mid;
    }
  }

  return index;
}

int main() {
  int n;
  cin >> n;

  int arr[n], cum_sum[n];
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr+n);

  cum_sum[0] = arr[0];
  for(int i=1; i<n; i++) {
    cum_sum[i] = arr[i] + cum_sum[i-1];
  }

  int T;
  cin >> T;
  while(T--) {
    int key;
    cin >> key;
    int index = searchIndex(arr, n, key);
    cout << index + 1 << " " << cum_sum[index] << "\n";
  }

  return 0;
}