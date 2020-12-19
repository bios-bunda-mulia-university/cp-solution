//Problem: https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;
 
int main() 
{
    unsigned long long length = 0;
    unsigned long long width = 0;
    unsigned long long stone = 0;  
    
    cin >> length
        >> width
        >> stone;
    
    unsigned long long numStones = (length/stone + (length % stone > 0) ) * (width/stone + (width % stone > 0) );
    cout << numStones << endl;
    
    return 0;
}
