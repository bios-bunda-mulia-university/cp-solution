#include <stdio.h>

int gcd(int n1, int n2) {
  if (n2 != 0)
    return gcd(n2, n1 % n2);
  else
    return n1;
}

int sum_hex_char(int digit) {
  int sum = 0;
  while (digit > 0) {
    sum += digit % 16;
    digit /= 16;
  }
  return sum;
}

int main() {
  int T;
  scanf("%d", &T);
  int L, R;
  while(T--) {
    scanf("%d%d", &L, &R);
    int count = 0;
    for(int i=L; i<=R; ++i) {
      if(gcd(i, sum_hex_char(i)) > 1) {
        count++;
      }
    }
    printf("%d\n", count);
  }

  return 0;
}
