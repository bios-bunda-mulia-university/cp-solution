#include <bits/stdc++.h>
    
using namespace std;
  
void faster() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}
    
int main() {
    faster();
    int t;
    cin >> t;
    
    while (t--) 
    {
      long long x, y;
      cin >> x >> y;
      cout << (x - y == 1 ? "NO" : "YES");
        cout << "\n";
    }
    
    return 0;
}