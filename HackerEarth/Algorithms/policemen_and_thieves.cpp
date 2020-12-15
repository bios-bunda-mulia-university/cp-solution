#include <bits/stdc++.h>

using namespace std;

int findThieves(char arr[], int n, int k) {
  vector<int> polices, thieves;
  
  for(int i=0; i<n; ++i) {
    if(arr[i] == 'P') polices.push_back(i); else thieves.push_back(i);
  }

  int caught = 0;
  int police = 0, thief = 0;
  while(police < polices.size() && thief < thieves.size()) {
    if(abs(polices[police]-thieves[thief]) <= k) {
      caught++; police++; thief++;
    } else if (polices[police] > thieves[thief]) {
      thief++;
    } else {
      police++;
    }
  }

  return caught;
}

int main() {
  int T;
  cin >> T;

  while(T--) {
    int n, k;
    cin >> n >> k;

    char arr[n];

    int totalCaught = 0;
    for(int i=0; i<n; ++i) {
      for(int j=0; j<n; ++j) {
        cin >> arr[j];
      }
      totalCaught += findThieves(arr, n, k);
    }

    cout << totalCaught << "\n";
  }
 
  return 0;
}
