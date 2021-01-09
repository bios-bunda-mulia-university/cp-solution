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
  
  int n;
  scanf("%d",&n);
  
  vector<int> arr(n);
  
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  
  for (int len=n; len; len/=2)
  {
    for(int i=0; i<n; i+=len)
    {
      if (is_sorted(arr.begin() + i, arr.begin() + i + len))
      {
        printf("%d",len);
        return 0;
      }
    }
  }
  
  return 0;
}