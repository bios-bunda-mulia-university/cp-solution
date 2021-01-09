#include <bits/stdc++.h>
  
using namespace std;
  
void faster()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
}
  
int main ()
{
  faster();
  int T;
  scanf("%d",&T);
  
  while(T--)
  {
    int n;
    scanf("%d",&n);
    
    int e;
    int sum = 0;
    
    for(int i=0; i<n; i++)
    {
      scanf("%d",&e);
      if (e <= 2048)
        sum += e;
    }
  
    sum >= 2048 ? printf("YES\n") : printf("NO\n");
  }
  return 0;
}