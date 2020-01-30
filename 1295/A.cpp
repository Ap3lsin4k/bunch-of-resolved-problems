#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	unsigned int t, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n&1)//odd
		{
			cout<<7;
			for(unsigned int i=1; i<n/2; ++i)
			{
				cout<<1;
			}
		}
		else
		{
			for(unsigned int i=0; i<n; i+=2)
			{
				cout<<1;
			}
		}
		cout<<"\n";
	}
}
