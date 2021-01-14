#include <bits/stdc++.h>

using namespace std;

int main() {
  int row, column;
  char letter[55][55];

  int x_1 = 1e5, y_1 = 1e5, x_2 = -1, y_2 = -1;

  cin >> row >> column;

  for(int i=0; i<row; i++) {
    for(int j=0; j<column; j++) {
      cin >> letter[i][j];
      if(letter[i][j] == '*') {
        x_1 = min(x_1, i); y_1 = min(y_1, j); x_2 = max(x_2, i); y_2 = max(y_2, j);
      }
    }
  }

  for(int i=x_1; i<=x_2; i++, cout << "\n") {
    for(int j=y_1; j<=y_2; j++) {
      cout << letter[i][j];
    }
  }

  return 0;
}
