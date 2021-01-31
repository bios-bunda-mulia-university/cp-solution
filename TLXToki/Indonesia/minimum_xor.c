#include<stdio.h>

int main() {
  long long int N, k;

  scanf("%lld%lld", &N, &k);

  if(k == 1) printf("%lld\n", N);
  else if(k == 2) printf("%lld", ((N + 1) / 2) ^ (N / 2));
  else printf("%lld", N % 2); 

  return 0;  
}
