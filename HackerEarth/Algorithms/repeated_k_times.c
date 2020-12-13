#include <stdio.h>
#include <string.h>

int MAX = 100002;

int findDuplicate(int arr[], int n, int k) {
  int frequency[MAX];
  memset(frequency, 0, sizeof(frequency)); 
  for(int i=0; i<n; i++) {
    frequency[arr[i]] += 1;
  }

  for(int i=0; i<n; i++) {
    if(frequency[i] == k) {
      return i;
    }
  }
}

int main() {
  int n, k;
  scanf("%d", &n);
  int arr[n];

  for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);

  printf("%d", findDuplicate(arr, n, k));

  return 0;
}
