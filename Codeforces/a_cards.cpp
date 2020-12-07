// Contributor: Jayaku Briliantio [BIOS-Bunda Mulia]

#include <bits/stdc++.h>

using namespace std;

void faster()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
}

int main ()
{
	int x; 
	scanf("%d",&x);
	
	char sentences[x];
	
	scanf("%s",sentences);
	
	int z=0, e=0, r=0, o=0, n=0;
	
	for (int i=0; i<x; i++)
	{
		if (sentences[i] == 'z')
			z++;
		else if (sentences[i] == 'e')
			e++;
		else if (sentences[i] == 'r')
			r++;
		else if (sentences[i] == 'o')
			o++;
		else if (sentences[i] == 'n')
			n++;
	}
	
	int ans0, ans1;
	
	if (z >= n || r >= n)
	{
		ans0 = min(z, min(e, min(r, o)));
		ans1 = min(o, min(n,e));
	}
	else
	{
		ans1 = min(o, min(n,e));
		ans0 = min(z, min(e, min(r, o)));
	}
	
	for (int i=0; i<ans1; i++)
	{
		cout << "1 ";
	}
	
	for (int i=0; i<ans0; i++)
	{
		cout << "0 ";
	}
	
	cout << endl;
	
	return 0;
}
