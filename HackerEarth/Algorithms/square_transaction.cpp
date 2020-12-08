// Contributor: Jayaku Briliantio [BIOS-Bunda Mulia]

#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  int n_transaction;
  cin >> n_transaction;

  lli transactions[n_transaction];

  for(int i=0; i<n_transaction; i++) {
    cin >> transactions[i];
  }

  int n_target;
  cin >> n_target;

  for(int i=0; i<n_target; i++) {
    lli target, acc_transaction = 0;
    int index_target = -1;
    cin >> target;
    for(int j=0; j<n_transaction; j++) {
      acc_transaction += transactions[j];
      if(target <= acc_transaction) {
        index_target = j + 1;
        break;
      }
    }
    cout << index_target << "\n";
  }

  return 0;
}
