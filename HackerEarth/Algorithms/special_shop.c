#include <stdio.h>
#include <math.h>
#define ll long long int

ll findMinimumCost(ll n, ll a, ll b) {
  
  ll average = (b * n) / (a + b);

  ll firstAttempt =  a * pow(average, 2) + b * pow((n-average), 2);
  average += 1;
  ll secondAttempt = a * pow(average, 2) + b * pow((n-average), 2);

  return firstAttempt < secondAttempt ? firstAttempt : secondAttempt;
}

int main() {
  ll T, n, a, b;
  scanf("%lld", &T);

  while(T--) {
    scanf("%lld%lld%lld", &n, &a, &b);

    printf("%lld\n", findMinimumCost(n, a, b));
  }

  return 0;
}
