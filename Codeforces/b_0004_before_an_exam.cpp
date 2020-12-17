#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int numDays(0);
    int totalTime(0); 
    
    cin >> numDays;
    cin >> totalTime;
    
    int *minTime   = new int[numDays];
    int *maxTime   = new int[numDays];
    int *studyTime = new int[numDays];

    int totalMinTime(0);
    int totalMaxTime(0);
    
    for(int i = 0; i < numDays; i++)
    {    
        scanf("%d %d", minTime + i, maxTime + i);
        totalMinTime += minTime[i];
        totalMaxTime += maxTime[i];
    }

    if(totalTime >= totalMinTime && totalTime <= totalMaxTime)
    {
        for(int i = 0; i < numDays; i++)
        {
            studyTime[i] = minTime[i]; 
            totalTime -= minTime[i];
        }
        
        for(int i = 0; i < numDays; i++)
        {
            if(maxTime[i] - minTime[i] < totalTime)
            {
                studyTime[i] = maxTime[i]; 
                totalTime -= (maxTime[i] - minTime[i]);
            }
                else
                {
                    studyTime[i] += totalTime; 
                    break;
                }
        }

        cout << "YES" << endl;
        
        for(int i = 0; i < numDays; i++)
        {
            cout << studyTime[i] << " ";
        }
    }
        else
        {
            cout << "NO";
        }
    
    return 0;
}
