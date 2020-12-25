#include <bits/stdc++.h>

using namespace std;

bool isWin(char c, vector<string> board) {
  // check vertical (column)
  if(board[0][0] == c && board[1][0] == c && board[2][0] == c) return true;
  if(board[0][1] == c && board[1][1] == c && board[2][1] == c) return true;
  if(board[0][2] == c && board[1][2] == c && board[2][2] == c) return true;

  // check horizontal (row)
  if(board[0][0] == c && board[0][1] == c && board[0][2] == c) return true;
  if(board[1][0] == c && board[1][1] == c && board[1][2] == c) return true;
  if(board[2][0] == c && board[2][1] == c && board[2][2] == c) return true;

  // check diagonal
  if(board[0][0] == c && board[1][1] == c && board[2][2] == c) return true;
  if(board[0][2] == c && board[1][1] == c && board[2][0] == c) return true;

  return false;
}

int main() {
  vector<string> board;
  string first, second, thrid;

  getline(cin, first);
  board.push_back(first);

  getline(cin, second);
  board.push_back(second);

  getline(cin, thrid);
  board.push_back(thrid);

  int numX(0), numO(0);

  for(int i=0; i<3; ++i) {
    for(int j=0; j<3; ++j) {
      if(board[i][j] == 'X') {
        numX++;
      } else if(board[i][j] == '0') {
        numO++;
      }
    }
  }

  if(numX > numO + 1 || numO > numX) cout << "illegal\n";
  else if(isWin('X', board) && isWin('0', board)) cout << "illegal\n";
  else if(isWin('X', board) && numX != numO + 1) cout << "illegal\n";
  else if(isWin('0', board) && numX != numO) cout << "illegal\n";
  else if(isWin('X', board) && !isWin('0', board)) cout << "the first player won\n";
  else if(!isWin('X', board) && isWin('0', board)) cout << "the second player won\n";
  else if(numX == numO + 1 && numX < 5) cout << "second\n";
  else if(numX == numO) cout << "first\n";
  else if(numX == 5 && numO == 4) cout << "draw\n";

  return 0;
}
