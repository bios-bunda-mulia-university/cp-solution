//Problem: https://codeforces.com/problemset/problem/1/A

#include <iostream>

using namespace std;

int main()
{
unsigned long sqLength = 0;
unsigned long sqWidth = 0;
unsigned long stoneSize = 0;

    cin >> sqLength
        >> sqWidth
        >> stoneSize;
        
    unsigned long reqStones = (sqLength/stoneSize + (sqLength % stoneSize > 0)) * (sqWidth/stoneSize + (sqWidth % stoneSize > 0));
    
    cout << reqStones
         << endl;
    
    return 0;
}
