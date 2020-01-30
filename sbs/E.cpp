#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;

#define takeMod %= 1000;

int main()
{
	ui n, c;
	ull i=1;
	i=i<<30;
	cout<<i<<'\n';
	i=i<<30;
	cout<<i<<'\n';
	cin>>n>>c;
	
	if(c>n)
	{
		ull l=1;
		ui i;
		for (i=0; i<=n-30; i+= 30)
		{
			l = l<<30;
			cout<<l<<"\n";
			l takeMod
			
		}
		
		l <<= n%30;
		cout<<l<<"\n";
	}
	
	
}

