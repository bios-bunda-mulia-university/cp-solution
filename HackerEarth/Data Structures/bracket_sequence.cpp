#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cin >> input;

  int length = input.length();
  int count = 0;

  int i = 0;
  for(i; i<length; ++i) {
    if(input[i] == ')') continue;
    int j = i;
    int diff = 0;
    for(j; j<i+length; ++j) {
      if(input[(j % length)] == '(') diff++;
      else diff--;

      if(diff < 0) break;
    }
    if(diff == 0) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}