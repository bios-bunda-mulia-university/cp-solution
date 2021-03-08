#include <stdio.h>
#include <math.h>

int main() {

  int T;
  scanf("%d", &T);

  while(T--) {
    int n;
    scanf("%d", &n);

    int factor = 0;

    int i=2;
    for(i; i<=sqrt(n); ++i) {
      if(n % i == 0) {
        factor++;
      }

      if(
        n % (n / i) == 0 && 
        i != ( n/ i)
      ) {
        factor++;
      }
    }

    if(n > 1) {
      printf("%d\n", factor + 2);
    } else {
      printf("1\n");
    }
  }

  return 0;
}
