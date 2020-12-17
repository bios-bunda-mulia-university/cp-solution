#include <iostream>
#include <string>

using namespace std;

int main()
{
    string source;
    string dest;
    
    getline(cin, source); 
    getline(cin,dest);
    
    int distanceH, distanceV;
    char letterH, letterV;
    
    if(source[0] < dest[0])
    {
        distanceH = dest[0] - source[0]; 
        letterH = 'R';
    }
        else
        {
            distanceH = source[0] - dest[0]; 
            letterH = 'L';
        } 

    if(source[1] < dest[1])
    {
        distanceV = dest[1] - source[1]; 
        letterV = 'U';
    }
        else
        {
            distanceV = source[1] - dest[1];
            letterV = 'D';
        }

    int numMoves = max(distanceH, distanceV);
    cout << numMoves << endl;
    
    while(numMoves--)
    {
        if(--distanceH >= 0)
        {
            cout << letterH;
        }
        
        if(--distanceV >= 0)
        {
            cout << letterV;
        }
        
        cout << endl;
    }
    
    return 0;
}
