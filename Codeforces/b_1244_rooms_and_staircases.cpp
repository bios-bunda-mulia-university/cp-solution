#include <bits/stdc++.h>
  
using namespace std;
  
void faster() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}
  
int main() {
    faster();
    
    int T;
    cin >> T;
    while(T--)
    {	
      int n;
      string s;
      int ans;
      cin >> n >> s;
      
      ans = n;
      
      for (int i=0; i<n; i++)
      {
        if (s[i] == '1') 
        {
          ans = max({ans, 2 * (i + 1), 2 * (n - i)});
        }
      }
      cout << ans << "\n";
    } 	
    return 0;
}