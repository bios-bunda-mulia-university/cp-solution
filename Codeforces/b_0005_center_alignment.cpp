#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string temp; 
    vector<string> lineVec; 
    int maxSize(0);

    while(getline(cin, temp))
    {
        lineVec.push_back(temp);
        if(temp.size() > maxSize)
        {
            maxSize = temp.size();
        }
    }

    bool addLeft(0);
    
    for(int i = 0; i < maxSize + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    for(int i = 0; i < lineVec.size(); i++)
    {
        string current = lineVec[i];
        int totalSpace = (maxSize - current.size());
        int leftSpace  = totalSpace / 2;
        int rightSpace = totalSpace / 2;
        
        if(totalSpace % 2)
        {
            if(addLeft)
            {
                ++leftSpace;
            }
                else
                {
                    ++rightSpace;
                }
                
            addLeft = 1 - addLeft;
        }
        cout << "*";
        
        for(int i = 0; i < leftSpace; i++)
        {
            cout << " ";
        }
        
        cout << current;
        
        for(int i = 0; i < rightSpace; i++)
        {
            cout << " ";
        }
        
        cout << "*" << endl;
    }

    for(int i = 0; i < maxSize + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
