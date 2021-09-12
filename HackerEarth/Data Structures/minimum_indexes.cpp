#include <bits/stdc++.h>

using namespace std;

long long int sum_number_digits(long long int num) {
  long long int sum = 0;
  while (num / 10 != 0) {
    sum += num % 10;
    num /= 10;
  }

  return sum + num;
}

int main() {
  int N, Q;
  cin >> N >> Q;

  long long int initial_arr[N], computed_arr[N];

  for(int i = 0; i < N; i++) {
    long long int number;
    cin >> number;
    initial_arr[i] = number;
    computed_arr[i] = sum_number_digits(number);
  }

  while(Q--) {
    int query;
    cin >> query;
    
    int j;
    for(j = query; j < N; j++) {
      if(computed_arr[query - 1] > computed_arr[j] && initial_arr[query - 1] < initial_arr[j]) {
        cout << j + 1 << "\n";
        break;
      }
    }

    if(j == N || query == N) {
      cout << "-1" << "\n";
    }
  }

  return 0;
}
