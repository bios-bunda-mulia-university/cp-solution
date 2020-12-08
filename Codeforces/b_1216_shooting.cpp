// Contributor: Jayaku Briliantio [BIOS-Bunda Mulia]

#include <bits/stdc++.h>

using namespace std;

void faster()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void fastscan(int &number) 
{  
    bool negative = false; 
    register int c; 
  
    number = 0; 

    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
  
        c = getchar(); 
    } 
  
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
        
    if (negative) 
        number *= -1; 
} 

int main()
{
	  faster();
    vector< pair<int, int> > vect;

    int n;
    fastscan(n);

    int power;

    for(int i=0; i<n; i++)
    {
        fastscan(power);
        vect.push_back(make_pair(power,i+1));
    }

    sort(vect.begin(),vect.end());

	int total = 0;
	int x = 1;
	
    for (int i=n-2; i>=0; i--)
    {
        total = total + (vect[i].first*x + 1);
        x++;
    }
    
    printf("%d\n",total+1);
    for(int i=n-1; i>=0; i--)
    {
    	printf("%d ",vect[i].second);
	}
	putchar('\n');
    return 0;
}