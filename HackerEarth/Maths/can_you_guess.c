#include <stdio.h>
#include <math.h>

int sumAllFactor(int num) {
  int f = 1;
  int sum = 0;
  for(f; f<=sqrt(num); f++) {
    if(num % f == 0) {
      if (num / f == f) {
        sum += f;
      } else {
        sum += (num / f) + f;
      }
    }
  }

  return sum;
}

int main() {
  int T;
  scanf("%d", &T);

  int num;
  while(T--) {
    scanf("%d", &num);

    printf("%d\n", (sumAllFactor(num) - num));
  }
  
  return 0;
}
